#include <iostream>
#include <cstring>
using namespace std;

int N, K;
int dist[101][101];
int ansA, ansB, ansD = 2000000007;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(dist, 0x3f, sizeof(dist));
	cin >> N >> K;
	for (int i = 1; i <= N; i++) dist[i][i] = 0;
	while (K--) {
		int x, y; cin >> x >> y;
		dist[x][y] = dist[y][x] = 1;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			int val = 0;
			for (int k = 1; k <= N; k++) {
				val += min(dist[k][i], dist[k][j]);
			}
			if (val < ansD) ansD = val, ansA = i, ansB = j;
		}
	}

	cout << ansA << ' ' << ansB << ' ' << ansD * 2;
}