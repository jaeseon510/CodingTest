#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
bool visted[26][26];
int n;
string board[26];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt = 0;
queue<pair<int, int>> q;
int bfs(int x, int y) {
	q.push({ x,y });
	visted[x][y] = true;
	cnt++;
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (0 <= nx && 0 <= ny && nx < n && ny < n && visted[nx][ny] == false && board[nx][ny] == '1') {
				q.push({ nx,ny });
				visted[nx][ny] = true;
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == '1' && visted[i][j] == false) {
				cnt = 0;
				bfs(i, j);
				ans.push_back(cnt);
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
}