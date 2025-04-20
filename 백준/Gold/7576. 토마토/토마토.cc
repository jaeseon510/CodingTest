#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
using namespace std;
bool flag =false;
int days = -1;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int board[1001][1001];
int visited[1001][1001];
queue<pair<int, int>> q;
int N, M;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			visited[i][j] = -1;
			if (board[i][j] == 1) {
				q.push({ i,j });
				visited[i][j]++;
			}
		}
	}
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int na = a + dx[i];
			int nb = b + dy[i];
			if (na >= 0 && nb >= 0 && N > na && M > nb && visited[na][nb] == -1 && board[na][nb] == 0) {
				q.push({ na,nb });
				visited[na][nb] = visited[a][b] + 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (days <= visited[i][j]) {
				days = visited[i][j];
			}
			if (board[i][j] == 0 && visited[i][j] == -1) {
				days = -1;
				flag = true;
				break;
			}
		}
		if (flag) {
			break;
		}
	}
	cout << days;
}