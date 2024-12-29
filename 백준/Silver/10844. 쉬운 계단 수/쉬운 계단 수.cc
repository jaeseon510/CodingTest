#include<iostream>
#include<vector>
#define endl '\n';
typedef long long ll;
using namespace std;
ll DP[105][10];
int mod = 1e9;
ll answer;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		DP[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)DP[i][j] = DP[i - 1][1];
			else if (j == 9)DP[i][j] = DP[i - 1][8];
			else DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j + 1];
			DP[i][j] = DP[i][j] % mod;
		}
	}
	for (int i = 0; i < 10 ; i++) {
		answer = answer + DP[n][i];
	}
	cout << answer % mod << endl;
	return 0;
}