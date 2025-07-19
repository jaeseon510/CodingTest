#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#define endl '\n';
using namespace std;
int c[10], a[10];
void f(int index, int n, int m);
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	f(0, n, m);
	return 0;
}

void f(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i];
			if (i != m - 1) {
				cout << ' ';
			}
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == 1) {
			continue;
		}
		c[i] = true;
		a[index] = i;
		f(index + 1, n, m);
		c[i] = false;
	}
}