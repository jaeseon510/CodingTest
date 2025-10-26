#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>

using namespace std;
int visit[101][101];
int map[101][101];
int t;
int direction[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
bool bfs(int h, int w, int f, int xs, int ys, int xe, int ye);
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, w, o, f, xs, ys, xe, ye;
		cin >> h >> w >> o >> f >> xs >> ys >> xe >> ye;
		memset(visit, 0, sizeof(visit));
		memset(map, 0, sizeof(map));
		for (int j = 0; j < o; j++) {
			int x, y, l;
			cin >> x >> y >> l;
			map[x][y] = l;
		}
		if (bfs(h, w, f, xs, ys, xe, ye)) {
			cout << "잘했어!!" << '\n';
		}
		else {
			cout << "인성 문제있어??\n";
		}
	}
	return 0;
}
bool bfs(int h, int w, int f, int xs, int ys, int xe, int ye) {
	bool result = false;
	queue<pair<int, pair<int, int>>> q;
	q.push(make_pair(f, make_pair(xs, ys)));
	visit[xs][ys] = 1;
	while (!q.empty()) {
		int force = q.front().first;
		int x = q.front().second.first;
		int y = q.front().second.second;
		q.pop();
		
		if (x == xe && y == ye) {
			result = true;
			break;
		}
		if (force == 0)continue;
		for (int i = 0; i < 4; i++) {
			int nx = x + direction[i][0];
			int ny = y + direction[i][1];
			if (nx > h || ny > w || nx < 1 || ny < 1) continue;
			if (visit[nx][ny]) continue;

			if (force >= (map[nx][ny] - map[x][y])) {
				visit[nx][ny] = 1;
				q.push(make_pair(force - 1, make_pair(nx, ny)));
			}
		}
	}
	return result;
}