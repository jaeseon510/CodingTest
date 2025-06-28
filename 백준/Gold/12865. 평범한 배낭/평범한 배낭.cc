#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
int w[101] = { 0, };
int v[101] = { 0, };
int DP[101][100001];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= n; i++) {
		DP[i][0] = 0;
	}
	for (int i = 1; i <= n; i++) {
		DP[0][i] = 0;
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (w[j] > i) {
				DP[j][i] = DP[j-1][i];
			}
			else {
				DP[j][i] = max(DP[j - 1][i - w[j]] + v[j], DP[j - 1][i]);
			}
		}
	}
	cout << DP[n][k];
}