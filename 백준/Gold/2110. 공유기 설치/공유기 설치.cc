#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int arr[200001];
int n, c;
bool a(int x) {
	int prev = arr[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] - prev >= x) {
			cnt++;
			prev = arr[i];
		}
	}
	if (cnt < c)return false;
	else return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int low = 1;
	int high = arr[n - 1] - arr[0];
	int ans = 0;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (a(mid)) {
			ans = max(ans, mid);
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << ans;
}