#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else return gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		vector<int> a(t);
		for (int j = 0; j < t; j++) {
			cin >> a[j];
		}
		long long  sum = 0;
		for (int j = 0; j < t-1; j++) {
			for (int k = j+1; k < t;k++) {
				sum += gcd(a[j], a[k]);
			}
		}
		cout << sum << '\n';
	}
}