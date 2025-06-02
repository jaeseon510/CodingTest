#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long a, b;
	cin >> a >> b;
	if (a == b) {
		cout << 0;
		return 0;
	}
	cout << max(a, b) - min(a, b)-1 << '\n';
	for (long long i = min(a, b)+1; i < max(a, b); i++) {
		cout << i <<" ";
	}
}