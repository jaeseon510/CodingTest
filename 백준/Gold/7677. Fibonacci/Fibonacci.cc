#include <iostream>
using namespace std;

int ans[15001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ans[1] = 1;
	for (int i = 2; i < 15000; i++) {
		ans[i] = (ans[i - 1] + ans[i - 2]) % 10000;
	}

	int N; cin >> N;
	while (N > -1) {
		cout << ans[N % 15000] << '\n';
		cin >> N;
	}
}