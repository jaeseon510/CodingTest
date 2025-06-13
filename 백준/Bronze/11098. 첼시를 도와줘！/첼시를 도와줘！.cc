#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		int min = 0,price;
		string name1, name2;
		for (int j = 0; j < m; j++) {
			cin >> price >> name1;
			if (min < price) {
				min = price;
				name2 = name1;
			}
		}
		cout << name2 << '\n';
	}
}