#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set<string, greater<string>> set;
	int n;
	string a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (b == "enter") {
			set.insert(a);
		}
		else {
			set.erase(a);
		}
	}
	for (auto i : set) {
		cout << i << '\n';
	}
}