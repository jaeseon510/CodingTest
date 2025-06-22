#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
vector<int> arr[1001];
bool visted[1001];
int n, m;
void DFS(int v) {
	visted[v] = 1;
	for (int i = 0; i < arr[v].size(); i++) {
		int idx = arr[v][i];
		if (visted[idx] == 0) {
			DFS(idx);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (visted[i] == 0) {
			cnt++;
			DFS(i);
		}
	}
	cout << cnt << '\n';
}