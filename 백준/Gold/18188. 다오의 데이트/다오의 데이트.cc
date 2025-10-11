#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#define MAX 21
#define FASTIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

using namespace std;
int H, W, N;
char B, C;
int MAP[MAX][MAX];
int MoveY[4] = { -1,0,1,0 };
int MoveX[4] = { 0,-1,0,1 };
vector<pair<int, int> > Vec;
pair<int, int> Start, End;

int change_Direction(char Dir) {
    if (Dir == 'W') {
        return 0;
    }
    else if (Dir == 'A') {
        return 1;
    }
    else if (Dir == 'S') {
        return 2;
    }
    return 3;
}

void input() {
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        string S;
        cin >> S;
        for (int j = 0; j < W; j++) {
            if (S[j] == 'D') {
                Start = make_pair(i, j);
            }
            else if (S[j] == 'Z') {
                End = make_pair(i, j);
            }
            else if (S[j] == '@') {
                MAP[i][j] = -1;
            }
        }
    }
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> B >> C;
        Vec.push_back(make_pair(change_Direction(B), change_Direction(C)));
    }
}

string reverse_Direction(int Dir) {
    if (Dir == 0) {
        return "W";
    }
    else if (Dir == 1) {
        return "A";
    }
    else if (Dir == 2) {
        return "S";
    }
    return "D";
}

void DFS(int Depth, string Direction, int Y, int X) {
    if (make_pair(Y, X) == End) {
        cout << "YES\n";
        cout << Direction << "\n";
        exit(0);
    }
    if (Depth == N) {
        return;
    }

    int First = Vec[Depth].first;
    int NextY = Y + MoveY[First];
    int NextX = X + MoveX[First];
    if ((NextY >= 0) && (NextY < H) && (NextX >= 0) && (NextX < W) && (MAP[NextY][NextX] != -1)) {
        DFS(Depth + 1, Direction + reverse_Direction(First), NextY, NextX);
    }

    int Second = Vec[Depth].second;
    NextY = Y + MoveY[Second];
    NextX = X + MoveX[Second];
    if ((NextY >= 0) && (NextY < H) && (NextX >= 0) && (NextX < W) && (MAP[NextY][NextX] != -1)) {
        DFS(Depth + 1, Direction + reverse_Direction(Second), NextY, NextX);
    }
}

void find_Answer() {
    cout << "NO\n";
}

int main() {
    FASTIO
        input();
    DFS(0, "", Start.first, Start.second);
    find_Answer();

    return 0;
}