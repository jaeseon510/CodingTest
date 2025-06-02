#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num;
	cin >> num;

	if (num % 10 != 0) {
		cout << -1 << '\n';
		return 0;
	}

	int a = num / 300;
	num %= 300;

	int b = num / 60;
	num %= 60;

	int c = num / 10;
	cout << a << ' ' << b << ' ' << c << '\n';
}