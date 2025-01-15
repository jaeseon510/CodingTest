#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<tuple>
using namespace std;

int N, M, cnt;
int map[1001][1001];
int dist[1001][1001][2];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
string s;
queue<tuple<int, int, int>> q;

int BFS()
{

	dist[1][1][1] = 1; // 시작지점은 1
	q.push({ 1,1,1 }); // START

	while (!q.empty())
	{
		int now_x = get<0>(q.front());
		int now_y = get<1>(q.front());
		int	wall_break = get<2>(q.front()); // 벽 부수기 사용 가능 횟수
		q.pop();

		if (now_x == N && now_y == M)
		{
			return dist[now_x][now_y][wall_break];
		}

		for (int i = 0; i < 4; i++)
		{
			int next_x = now_x + dx[i];
			int next_y = now_y + dy[i];

			if (next_x >= 1 && next_y >= 1 && next_x <= N && next_y <= M)
			{
				// 가려는 곳이 벽이고, 벽부수기 스킬이 남아있는 경우
				if (map[next_x][next_y] == 1 && wall_break == 1)
				{
					q.push({ next_x ,next_y,wall_break - 1 });
					dist[next_x][next_y][wall_break - 1] = dist[now_x][now_y][wall_break] + 1;

				}
				// 갈수있는 곳이고 방문한 적이 없는 경우
				else if (map[next_x][next_y] == 0 && dist[next_x][next_y][wall_break] == 0)
				{
					q.push({ next_x , next_y, wall_break });
					dist[next_x][next_y][wall_break] = dist[now_x][now_y][wall_break] + 1;
				}
			}
		}
	}

	return -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> s;
		for (int j = 1; j <= M; j++)
			map[i][j] = s[j - 1] - '0';
	}

	cout << BFS();
}