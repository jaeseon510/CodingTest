#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define AREA_MAX 55

typedef unsigned long long bits;

#define BITS 64
#define LENGTH 1565
#define SetOf(no) ((bits) 1 << (no))

// hack detected log;
int l[200001] = { 0, };

struct Player {
   int location;
   int items[AREA_MAX];
};

// banned player set;

bits set[LENGTH] = { 0, };

int add (int n) {
   int a = n / BITS;
   int b = n % BITS;
   bits c = SetOf(b);
   if (set[a] & c) return 0;
   set[n / BITS] |= SetOf(n % BITS);
   return 1;
}

void move (struct Player *players, int p, int area) {
   players[p].location = area;
}

int farming (struct Player *players, int p, int f) {
   players[p].items[f]++;
   return (players[p].location == f);
}

int crafting (struct Player *players, int p, int a, int b) {
   int *ptr = players[p].items, ret;
   ret = (ptr[a] && ptr[b]) ? 1 : 0;
   if (ptr[a]) ptr[a]--;
   if (ptr[b]) ptr[b]--;
   return ret;
}

int attack (struct Player *players, int p, int target) {
   return (players[p].location == players[target].location);
}

int main (void) {
   int cntLog = 0, cntPly = 0;
   int t, n, i;
   scanf("%d %d", &t, &n);
   
   struct Player *players = (struct Player *) malloc(sizeof(struct Player) * (n + 1));
   for (i = 1; i <= n; i++) {
      players[i].location = 1;
      memset(&players[i].items, 0, sizeof(int) * AREA_MAX);
   }
   
   int idx, p, a, b, h;
   char c;
   while (t--) {
      h = 0;
      scanf("%d %d %c", &idx, &p, &c);
      switch (c) {
         case 'M':
            scanf("%d", &a);
            move(players, p, a);
            break;
         case 'F':
            scanf("%d", &a);
            if (!farming(players, p, a)) {
               // hack detected;
               h = 1;
            }
            break;
         case 'C':
            scanf("%d %d", &a, &b);
            if (!crafting(players, p, a, b)) {
               // hack detected;
               h = 1;
            }
            break;
         case 'A':
            scanf("%d", &a);
            if (!attack(players, p, a)) {
               // hack detected;
               h = 1;
               // ban player;
               if (add(p)) cntPly++;
            }
            break;
         default:
            // input error;
            break;
      }
      
      if (h) {
         l[cntLog++] = idx;
      }
   }
   
   // print hack detected log;
   printf("%d\n", cntLog);
   for (i = 0; i < cntLog; i++)
      printf("%d ", l[i]);
   if (cntLog) printf("\n");
   
   // print banned players;
   printf("%d\n", cntPly);
   i = -1, a = 0;
   while (++i < LENGTH) {
      if (set[i]) {
         for (b = 0; b < BITS; b++) {
            if (set[i] & SetOf(b)) printf("%d ", a + b);
         }
      }
      a += BITS;
   }
   if (cntPly) printf("\n");
   return 0;
}