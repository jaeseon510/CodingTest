#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else return gcd(y, x % y);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a[i] = abs(s-k);
	}
	int ans = a[0];
	for (int i = 1; i < n; i++) {
		ans = gcd(ans, a[i]);
	}
	cout << ans << '\n';
	return 0;
}