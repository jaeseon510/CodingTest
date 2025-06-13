#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a == b) {
			cout << "Possible" << '\n';
		}
		else {
			cout << "Impossible" << '\n';
		}
	}
}