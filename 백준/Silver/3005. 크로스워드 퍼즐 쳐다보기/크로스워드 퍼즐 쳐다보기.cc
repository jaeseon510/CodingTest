#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    cin >> R >> C;
    vector<string> grid(R);
    for (int i = 0; i < R; i++) {
        cin >> grid[i];
    }

    string answer = "{";

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] != '#' && (j == 0 || grid[i][j-1] == '#')) {
                string w;
                int k = j;
                while (k < C && grid[i][k] != '#') {
                    w.push_back(grid[i][k]);
                    k++;
                }
                if (w.size() > 1 && w < answer) {
                    answer = w;
                }
            }
        }
    }

    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) {
            if (grid[i][j] != '#' && (i == 0 || grid[i-1][j] == '#')) {
                string w;
                int k = i;
                while (k < R && grid[k][j] != '#') {
                    w.push_back(grid[k][j]);
                    k++;
                }
                if (w.size() > 1 && w < answer) {
                    answer = w;
                }
            }
        }
    }

    cout << answer << "\n";
    return 0;
}
