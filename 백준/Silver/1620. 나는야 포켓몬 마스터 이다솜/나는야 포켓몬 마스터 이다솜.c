#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 21

//노드
typedef struct __node
{
  int no;
  char name[MAX_NAME];
} Node;

//qsort위한 비교힘수
int compare(const void* first, const void* second)
{
  Node *a = (Node*)first;
  Node *b = (Node*)second;

  if(strcmp(a->name, b->name) > 0)
    return 1;
  else
    return -1;
}

int main()
{
  int n, m, i;
  Node* pocket_list = NULL;
  Node* sorted_list = NULL;
  char quiz[MAX_NAME];

  scanf("%d %d", &n, &m);

  pocket_list = (Node*)malloc(n * sizeof(Node));
  sorted_list = (Node*)malloc(n * sizeof(Node));

  for(i = 0; i < n; i++)
    {
      scanf(" %s", pocket_list[i].name);
      pocket_list[i].no = i + 1; 
      sorted_list[i] = pocket_list[i];
    }

  qsort(sorted_list, n, sizeof(sorted_list[0]), compare);



  for(i = 0; i < m; i++)
    {
      scanf(" %s", quiz);

      if(quiz[0] >= '1' && quiz[0] <= '9')
      {
        int idx = atoi(quiz);
        printf("%s\n", pocket_list[idx - 1].name);
      }
      else{
        int left, right, mid;
        left = 0, right = n -1;

        while(left <= right)
          {
            mid = (left + right) / 2;

            if(strcmp(sorted_list[mid].name, quiz) == 0)
            {
              printf("%d\n", sorted_list[mid].no);
              break;
            }
            else if(strcmp(sorted_list[mid].name, quiz) > 0)
              right = mid - 1;
            else
              left = mid + 1;
          }
      }
      
    }

  free(sorted_list);
  free(pocket_list);

  return 0;
}