#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		ll x; cin >> x;
		ll exp = 10;
		while (true) {
			ll xx = x * (exp - 1);
			int digitsum = 0;
			while (xx) {
				digitsum += xx % 10;
				xx /= 10;
			}
			if (digitsum & 1) {
				cout << x * (exp - 1) << '\n';
				break;
			}
			else exp *= 10;
		}
	}
}