#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#define endl '\n';
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, ans = 0;
	cin >> n;
	for (int i = 1, len = 1; i <= n; i *= 10, len++) {
		int end = i * 10-1;
		if (end > n) {
			end = n;
		}
		ans += (end - i + 1) * len;
	}
	cout << ans << endl;
	return 0;
}