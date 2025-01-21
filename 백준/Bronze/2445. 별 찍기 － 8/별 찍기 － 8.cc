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
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << "*";
		}
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = n; j > i; j--) {
			cout << "*";
		}
		cout << '\n';
	}
}