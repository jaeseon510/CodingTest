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
	int start, end;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		cin >> start >> end;
		arr.push_back(make_pair(end, start));
	}
	sort(arr.begin(), arr.end());
	int time = arr[0].first;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (time <= arr[i].second) {
			count++;
			time = arr[i].first;
		}
	}
	cout << count;
}