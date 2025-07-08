#include<stdio.h>
int n, m;
int arr[501][501];
int ans;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int chk[501][501];
void func(int x, int y, int sum, int num)
{
    if (num == 4)
    {
        if (ans < sum) ans = sum;
        return;
    }
 
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if (chk[xx][yy] == 1) continue;
        if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
        chk[xx][yy] = 1;
        if (num == 2)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i == j) continue;
                int xxx = x + dx[j], yyy = y + dy[j];
                if (chk[xxx][yyy] == 1) continue;
                if (xxx < 0 || xxx >= n || yyy < 0 || yyy >= m) continue;
                chk[xxx][yyy] = 1;
                func(xxx, yyy, sum + arr[xx][yy] + arr[xxx][yyy], 4);
                chk[xxx][yyy] = 0;
            }
        }
        func(xx, yy, sum + arr[xx][yy], num + 1);
        chk[xx][yy] = 0;
    }
}
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
     
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            chk[i][j] = 1;
            func(i, j, arr[i][j], 1);
            chk[i][j] = 0;
        }
    }
     
    printf("%d\n", ans);
}