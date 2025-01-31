#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long  int a, b;
	cin >> a >> b;
	cout << (a + b)*(a - b) << '\n';
	return 0;
}