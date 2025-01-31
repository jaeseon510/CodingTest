#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> a(5);
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	int sum = accumulate(a.begin(),a.end(),0);
	sort(a.begin(),a.end());
	cout << sum / 5 << '\n' << a[2];
}