#include <stdio.h>
#include <string.h>

#define MAX_N 102
#define MAX_K 102

int n;
char str[MAX_N][11];  // 길이 11로 수정
int k;
char cand[MAX_K][11];  // 길이 11로 수정
int pnt;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%s", str[i]);
        if (strcmp(str[i], "?") == 0) pnt = i;
    }
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        scanf("%s", cand[i]);
    }

    for (int i = 1; i <= k; i++) {
        int duplicate = 0;
        for (int j = 1; j <= n; j++) {
            if (strcmp(cand[i], str[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) continue;

        if (pnt != 1) {
            if (str[pnt - 1][strlen(str[pnt - 1]) - 1] != cand[i][0]) continue;
        }
        if (pnt != n) {
            if (str[pnt + 1][0] != cand[i][strlen(cand[i]) - 1]) continue;
        }
        printf("%s", cand[i]);
        return 0;
    }

    return 0;
}
