#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int e = a + b + c + d;
		if (e == 0) {
			cout << 'D' << '\n';
		}
		else if (e == 1) {
			cout << 'C' << '\n';
		}
		else if (e == 2) {
			cout << 'B' << '\n';
		}
		else if (e == 3) {
			cout << 'A' << '\n';
		}
		else {
			cout << 'E' << '\n';
		}
	}
}