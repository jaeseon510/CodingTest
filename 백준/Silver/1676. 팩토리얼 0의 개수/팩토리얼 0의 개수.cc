#include<iostream>
using namespace std;
//직관버전
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cout << n / 5 + n / 25 + n / 125 << "\n";
	return 0;
}