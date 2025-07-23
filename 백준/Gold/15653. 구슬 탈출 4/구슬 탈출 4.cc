#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include <tuple>

#define endl "\n"
#define MAX 10
#define INF 987654321
using namespace std;

int n, m;
char map[MAX][MAX];
bool visited[MAX][MAX][MAX][MAX];
pair<int, int> red, blue;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};


int findDistance(int x, int y, int xx, int yy) {
    return abs(x - xx) + abs(y - yy);
}

void bfs() {
    queue<tuple<int, int, int, int, int>> q;
    q.push({red.first, red.second, blue.first, blue.second, 0});
    visited[red.first][red.second][blue.first][blue.second] = true;

    while (q.empty() == 0) {
        int Rx, Ry, Bx, By, Cnt;
        tie(Rx, Ry, Bx, By, Cnt) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            bool red_falg, blue_flag;
            red_falg = blue_flag = false;

            int nRx = Rx + dx[i];
            int nRy = Ry + dy[i];
            int nBx = Bx + dx[i];
            int nBy = By + dy[i];
            int nCnt = Cnt + 1;

            while (1) {
                if (map[nRx][nRy] == '#') break;
                if (map[nRx][nRy] == 'O') {
                    red_falg = true;
                    break;
                }
                nRx += dx[i];
                nRy += dy[i];
            }
            nRx -= dx[i];
            nRy -= dy[i];

            while (1) {
                if (map[nBx][nBy] == '#') break;
                if (map[nBx][nBy] == 'O') {
                    blue_flag = true;
                    break;
                }
                nBx += dx[i];
                nBy += dy[i];
            }
            nBx -= dx[i];
            nBy -= dy[i];

            if (blue_flag) continue;
            if (red_falg) {
                cout << nCnt << endl;
                return;
            }

            if (nRx == nBx && nRy == nBy) {
                int red_dist = findDistance(Rx, Ry, nRx, nRy);
                int blue_dist = findDistance(Bx, By, nBx, nBy);

                if (red_dist > blue_dist) {
                    nRx -= dx[i];
                    nRy -= dy[i];
                } else {
                    nBx -= dx[i];
                    nBy -= dy[i];
                }
            }
            if (!visited[nRx][nRy][nBx][nBy]) {
                visited[nRx][nRy][nBx][nBy] = true;
                q.push({nRx, nRy, nBx, nBy, nCnt});
            }
        }
    }
    cout << -1 << endl;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'R') {
                red = {i, j};
                map[i][j] = '.';
            } else if (map[i][j] == 'B') {
                blue = {i, j};
                map[i][j] = '.';
            }
        }
    }
    bfs();
    return 0;
}