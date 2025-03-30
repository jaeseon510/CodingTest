#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,ans=0;
	cin >> n;
	while (n--) {
		string a;
		cin >> a;
		stack<int> s;
		for (auto i : a) {
			if (!s.empty() && s.top() == i)s.pop();
			else s.push(i);
		}
		if (s.empty())ans++;
	}
	cout << ans;
}