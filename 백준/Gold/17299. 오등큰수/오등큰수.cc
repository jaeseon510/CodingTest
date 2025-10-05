#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> ans(n,-1);
	vector<int> a(n);
	vector<int> cnt(1000000);
	stack<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;

	}
	for (int i = 0; i < n; i++) {
		while (!s.empty() && cnt[a[s.top()]] < cnt[a[i]]) {
			ans[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}