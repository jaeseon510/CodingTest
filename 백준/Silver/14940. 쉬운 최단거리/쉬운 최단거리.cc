#include<iostream>
#include<queue>
#define MAX 1001
using namespace std;

int front_y[4] = { -1,1,0,0 };
int front_x[4] = { 0,0,-1,1 };

int N, M, i, j;
char miro[MAX][MAX];
int dist[MAX][MAX];
int discovered[MAX][MAX];

queue<pair<int, int>>q;

void Init(int N, int M) {
	for (int y = 1; y <= N; y++)
		for (int x = 1; x <= M; x++)
			cin >> miro[y][x];
}

void Bfs(int pos_y, int pos_x) {
	discovered[pos_y][pos_x] = true;
	q.push(make_pair(pos_y, pos_x));
	dist[pos_y][pos_x] = 0;

	while (q.empty() == false) {
		int pos_y = q.front().first;
		int pos_x = q.front().second;
		q.pop();
        
		for (int dir = 0; dir < 4; dir++) {
			int nextPos_y = pos_y + front_y[dir];
			int nextPos_x = pos_x + front_x[dir];

			if (nextPos_y < 1 || nextPos_x < 1)
				continue;
			if (nextPos_y > N || nextPos_x > M)
				continue;
			if (miro[nextPos_y][nextPos_x] == 48)
				continue;
			if (discovered[nextPos_y][nextPos_x])
				continue;

			discovered[nextPos_y][nextPos_x] = true;
			q.push(make_pair(nextPos_y, nextPos_x));
            
			dist[nextPos_y][nextPos_x] = dist[pos_y][pos_x] + 1;
		}
	}
}

int main() {
	cin >> N >> M;
	Init(N, M);
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++){
			if (miro[i][j] == '2')
				break;
		}			
		if (miro[i][j] == '2')
			break;
	}

	Bfs(i, j);

	for (int y = 1; y <= N; y++) {
		for (int x = 1; x <= M; x++)
			if (miro[y][x] == '1' && dist[y][x] == 0)
				cout << -1 << " ";
			else
				cout << dist[y][x] << " ";
		cout << endl;
	}

	return 0;
}