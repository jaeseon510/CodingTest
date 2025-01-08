#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	string ans;
	cin >> n;
	stack<int> s;
	int m = 0;
	while (n--) {
		int x;
		cin >> x;
		if (x > m) {
			while (x > m) {
				s.push(++m);
				ans += '+';
			}
			s.pop();
			ans += '-';
		} else {
			bool found = false;
			if (!s.empty()) {
				int top = s.top();
				s.pop();
				ans += '-';
				if (x == top) {
					found = true;
				}
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for (auto x : ans) {
		cout << x << '\n';
	}
	return 0;
}