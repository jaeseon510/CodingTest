#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s = "";
	stack<char>left, right;
	cin >> s;
	for (int i = 0; i < (int)s.size(); i++) {
		left.push(s[i]);
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char d;
		cin >> d;
		if (d == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (d == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (d == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (d == 'P') {
			char a;
			cin >> a;
			left.push(a);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	cout << endl;
}