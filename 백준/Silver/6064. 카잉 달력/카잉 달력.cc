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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m, x, y;
		cin >> m >> n >> x >> y;
		x--, y--;
		bool a = false;
		for (int j = x; j < (n * m); j += m) {
			if (j % n == y) {
				cout << j + 1 << '\n';
				a = true;
				break;
			}
		}
		if (!a) {
			cout << -1 << '\n';
		}
	}
	return 0;
}