#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
vector<pair<int, int>> arr[20001];
priority_queue<pair<int, int>> pq;
int a[20001];
int main() {
	int v, e, k;
	cin >> v >> e >> k;
	for (int i = 0; i < e; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		arr[u].push_back(make_pair(v, w));
	}

	fill(a + 1, a + v + 1, 1E9);
	pq.push(make_pair(0, k));
	a[k]= 0;
	while (!pq.empty()) {
		int cur = pq.top().second;

		int cur_dist = -pq.top().first;
		pq.pop();

		if (a[cur] < cur_dist) {
			continue;
		}

		for (int i = 0; i < arr[cur].size(); ++i) {
			int next = arr[cur][i].first;
			int cost = cur_dist + arr[cur][i].second;
			if (a[next] > cost) {
				a[next] = cost;
				pq.push(make_pair(-cost, next));
			}
		}
	}
	for (int i = 1; i < v + 1; i++) {
		if (a[i] == 1E9) {
			cout << "INF" << " ";
		}
		else {
			cout << a[i] << '\n';
		}
	}
	return 0;
}