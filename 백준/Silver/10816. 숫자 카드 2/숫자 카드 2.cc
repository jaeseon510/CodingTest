#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		cout << upper_bound(arr.begin(), arr.end(), a) - lower_bound(arr.begin(), arr.end(), a) << " ";
	}
}