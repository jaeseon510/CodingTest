#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include <cassert>
// hash(s[l1..r1]) =? hash(s[l2..r2]) -> O(1)
using namespace std;
typedef long long ll;


vector<int> a(const string& s) {
	int l = s.size();
	vector<int> v(l);
	v[0] = 0;
	int j = 0;
	for (int i = 1; i < l; ++i) {
		while (j > 0 && s[i] != s[j]) {
			j = v[j - 1];
		}
		if (s[i] == s[j]) {
			v[i] = j + 1;
			j += 1;
		}
		else {
			v[i] = 0;
		}
	}
	return v;
}
int main() {
	int l;
	string s;
	cin >> l >> s;
	auto A = a(s);
	cout << l -  A[l-1] << '\n';
}