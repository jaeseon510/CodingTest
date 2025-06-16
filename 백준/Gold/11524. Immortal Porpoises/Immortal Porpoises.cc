#include <iostream>
using namespace std;
typedef long long ll;

ll x;

ll mat[2][2], val[2];

void solve() {
	mat[0][0] = mat[0][1] = mat[1][0] = 1, mat[1][1] = 0;
	val[0] = 1, val[1] = 0;

	while (x) {
		if (x & 1) {
			ll tmp1 = mat[0][0] * val[0] + mat[0][1] * val[1], tmp2 = mat[1][0] * val[0] + mat[1][1] * val[1];
			val[0] = tmp1 % 1000000000, val[1] = tmp2 % 1000000000;
		}
		ll tmp1 = mat[0][0] * mat[0][0] + mat[0][1] * mat[1][0], tmp2 = mat[0][0] * mat[0][1] + mat[0][1] * mat[1][1];
		ll tmp3 = mat[1][0] * mat[0][0] + mat[1][1] * mat[1][0], tmp4 = mat[1][0] * mat[0][1] + mat[1][1] * mat[1][1];
		mat[0][0] = tmp1 % 1000000000, mat[0][1] = tmp2 % 1000000000, mat[1][0] = tmp3 % 1000000000, mat[1][1] = tmp4 % 1000000000;
		x >>= 1;
	}

	cout << val[1] << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> x >> x;
		cout << t << ' ';
		solve();
	}
}