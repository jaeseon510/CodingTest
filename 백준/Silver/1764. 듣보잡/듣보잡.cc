#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
vector<string> name1;
vector<string> name2;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		name1.push_back(a);
	}
	sort(name1.begin(), name1.end());
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		if (binary_search(name1.begin(), name1.end(), a)) {
			name2.push_back(a);
		}
	}
	sort(name2.begin(), name2.end());
	cout << name2.size() << '\n';
	for (int i = 0; i < name2.size(); i++) {
		cout << name2[i] << '\n';
	}
}