#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void move(int titles, int s, int e) {
	if (titles == 0) return;
	move(titles - 1, s, 3 - s - e);
	cout << "ABC"[s] << " " << "ABC"[e] << '\n';
	move(titles - 1, 3 - s - e, e);
}
int main() {
	int n;
	cin >> n;
	vector<int> dp(21);
	dp[1] = 1;
	for (int i = 2; i < 21; i++) {
		dp[i] = (1<<(i-2)) - 1 + 3 + dp[i - 2];
	}
	cout << dp[n] << '\n';

	int pos = 0;
	while (n >= 2) {
		move(n - 2, pos, 2 - pos);
		cout << "ABC"[pos] << " B" << '\n';
		cout << "ABC"[pos] << " D" << '\n';
		cout << "B D" << '\n';
		n -= 2;
		pos = 2 - pos;
	}
	if (n == 1) {
		cout << "ABC"[pos] << " D" << '\n';
	}
}