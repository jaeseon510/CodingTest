#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
long long n, m;
int arr[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m,max_n=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		max_n = max(max_n, arr[i]);
	}
	long long left = 0, right = max_n,ans=0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if(arr[i]>mid)sum += arr[i] - mid;
		}
		if (sum < m) {
			right = mid - 1;
		}
		else {
			ans = mid;
			left = mid + 1;
		}
	}
	cout << ans;
}