#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define endl '\n';
using namespace std;
int check(vector<string>& arr) {
	int n = arr.size();
	int ans = 1;
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 1; j < n; j++) {
			if (arr[i][j] == arr[i][j-1]) {
				cnt++;
			}
			else {
				cnt = 1;
			}
			if (ans < cnt) {
				ans = cnt;
			}
		}
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (arr[j][i] == arr[j-1][i]) {
				cnt++;
			}
			else {
				cnt = 1;
			}
			if (ans < cnt) {
				ans = cnt;
			}
		}
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i = 0; i < n; i++) {
			cin >> arr[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + 1 < n) {
				swap(arr[i][j], arr[i + 1][j]);
				int temp = check(arr);
				if (ans < temp) {
					ans = temp;
				}
				swap(arr[i][j], arr[i + 1][j]);
			}
			if (j + 1 < n) {
				swap(arr[i][j], arr[i][j+1]);
				int temp = check(arr);
				if (ans < temp) {
					ans = temp;
				}
				swap(arr[i][j], arr[i][j + 1]);
			}
		}
	}
	cout << ans << endl;
	return 0;
}