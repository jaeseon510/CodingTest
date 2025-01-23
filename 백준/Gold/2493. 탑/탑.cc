#include<iostream>
#include<stack>
#include<algorithm>
#include<utility>
#define x first
#define y second
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<pair<int, int>> st;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		while (!st.empty()) {
			if (st.top().y > a) {
				cout << st.top().x << " ";
				break;
			}
			st.pop();
		}
		if (st.empty())cout << 0 << " ";
		st.push(make_pair(i, a));
	}
}