#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> dp(n, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j] && dp[j]+1 > dp[i]) {
				dp[i] = dp[j] + 1;
			}
		}
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;
}