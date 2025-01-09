#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, x;
vector<int> arr;
void b_s(int x) {
	int left = 0, mid = 0, right =  n - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == x) {
			cout << 1 << '\n';
			return;
		}
		else if (arr[mid] > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << 0 << '\n';
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr.push_back(k);
	}
	sort(arr.begin(), arr.end());
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> k;
		b_s(k);
	}
}