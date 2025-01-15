#include<iostream>
#include<algorithm>
#include<vector>
#define endl '\n';
using namespace std;
long long mod =1000000000;
int dp[201][201];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k;
	cin >> n >> k;
	dp[0][0] = 1;
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++) {
				dp[i][j] += dp[i - 1][j - l];
				dp[i][j] %= mod;
			}
		}
	}
	cout << dp[k][n] << endl;
	return 0;
}