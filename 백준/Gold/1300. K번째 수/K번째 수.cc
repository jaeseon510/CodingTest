#include <iostream>
using namespace std;
typedef long long LL;
LL ans;

void find_value(int n, int k, LL lo, LL hi) {
	LL val = (lo + hi) / 2, smalls = 0, temp;

	if (lo <= hi) {
		for (LL layer = 1; layer <= n; layer++) {
			temp = val / layer;
			if (temp > n) temp = n;
			smalls += temp;
		}
		
		if (lo == hi) { ans = lo; return; }

		if (smalls < k)
			find_value(n, k, val + 1, hi);
		else if (smalls >= k)
			find_value(n, k, lo, val);
	}
}

int main(void) {
	LL n, k;

	cin >> n >> k;
	find_value(n, k, 1, n*n);
	cout << ans;

	return 0;
}