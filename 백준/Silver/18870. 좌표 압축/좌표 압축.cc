#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<long long> x1;
	vector<long long> x2;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		x1.push_back(temp);
		x2.push_back(temp);
	}
	sort(x1.begin(), x1.end());
	x1.erase(unique(x1.begin(), x1.end()), x1.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " ";
	}
}