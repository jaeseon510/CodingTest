#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k, count = 0,i;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
		if (count == k) {
			break;
		}
	}
	if (count != k)i = 0;
	cout << i;
}