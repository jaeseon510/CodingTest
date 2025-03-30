#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x, count = 0;
	cin >> x;
	sort(a.begin(), a.end());
	int right=n-1, left=0, ans = 0;
	while (right > left) {
		if (a[right] + a[left] == x) {
			ans++;
			right--;
		}
		else if (a[right] + a[left] > x) {
			right--;
		}
		else {
			left++;
		}
	}
	cout << ans;
}