#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int dp[1001][1001] = { 0 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    int alen = a.length();
    int blen = b.length();

    for (int i = 1; i <= blen; i++) {
        for (int j = 1; j <= alen; j++) {
            if (b[i - 1] == a[j - 1]) {
                dp[j][i] = max(dp[j][i], dp[j - 1][i - 1] + 1);
            }
            else {
                dp[j][i] = max(dp[j - 1][i], dp[j][i - 1]);
            }
        }
    }

    cout << dp[alen][blen];
}
