#include<iostream>
#include<vector>
using namespace std;
const int INF = 1e4 + 7;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> dp(n+1);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= INF;
	}
	cout << dp[n] << "\n";
	return 0l;
}