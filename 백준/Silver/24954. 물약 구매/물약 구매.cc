#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int n,ans=100000000000;
vector<pair<int, int>> discount[13];
void func(vector<int> arr, int total, int cnt) {
	if (cnt == n) {
		ans = min(ans, total);
		return;
	}
	cnt++;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			auto temp = arr;
			temp[i] = 0;
			for (auto p : discount[i]) {
				if (temp[p.first] > 0) {
					temp[p.first] = max(1, temp[p.first] - p.second);
				}
			}
			func(temp, total + arr[i], cnt);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<int> price(n);
	for (int i = 0; i < n; i++) cin >> price[i];
	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;
		while (q--) {
			int x, y;
			cin >> x >> y;
			discount[i].emplace_back(make_pair(x-1, y));
		}
	}
	func(price, 0, 0);
	cout << ans;
}