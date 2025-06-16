#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2) {
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}
	else {
		return p1.first < p2.first;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
	return 0;
}