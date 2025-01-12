#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> a(26);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stack<double> st;
	for (auto ch : s) {
		if (ch >= 'A' && ch <= 'Z') {
			st.push((double)a[ch - 'A']);
		}
		else {
			double a2 = st.top();
			st.pop();
			double a1 = st.top();
			st.pop();
				if (ch == '+') {
					st.push(a1 + a2);
				}
				else if (ch == '-') {
					st.push(a1 - a2);
				}
				else if (ch == '*') {
					st.push(a1 * a2);
				}
				else if (ch == '/') {
					st.push(a1 / a2);
				}
		}
	}
	cout << fixed << setprecision(2) << st.top() << '\n';
}