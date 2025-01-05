#include<iostream>
#include<algorithm>
using namespace std;
int arr[10001];
int ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int k, n;
	cin >> k >> n;
	long long int max_n=0;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
		if (arr[i] > max_n)	max_n = arr[i];
	}
	long long int left = 1, right = max_n;
	while (left <= right) {
		long long int mid = (left + right) / 2;
		long long int sum = 0;
		for (int i = 0; i < k; i++) {
			sum += arr[i] / mid;
		}
		if (sum >= n) {
			left = mid + 1;
			if (ans < mid) ans = mid;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans;
}