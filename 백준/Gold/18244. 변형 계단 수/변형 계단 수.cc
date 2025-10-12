#include<iostream>
#include<cstring>
using namespace std;
const int MOD = 1e9 + 7;

int n, dp[111][11][3][4], ans;

int dfs(int cur, int num, int flag, int cnt) {
    int& result = dp[cur][num][flag][cnt];
    if (result != -1) return result;
    if (cnt == 3) return result = 0;
    if (cur == n - 1) return result = 1;
    result = 0;
    for (int i = -1; i <= 1; i++) {
        if (!i) continue;
        int nxt_num = num + i;
        if (nxt_num < 0 || nxt_num > 9) continue;
        int nxt_flag = nxt_num > num ? 1 : 2;
        result = (result + dfs(cur + 1, nxt_num, nxt_flag, !flag || flag == nxt_flag ? cnt + 1 : 1)) % MOD;
    }
    return result;
}

int main(void) {
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i <= 9; i++) {
        ans = (ans + dfs(0, i, 0, 0)) % MOD;
    }
    cout << ans;
}