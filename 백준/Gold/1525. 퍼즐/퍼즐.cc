#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

string correct = "123456780";
unordered_map<string, int> map;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(string init) {
    queue<string> q;
    q.push(init);
    map[init] = 0;
    
    while (!q.empty()) {
        string pos = q.front();
        q.pop();
        int move = map[pos];
        int empty = pos.find('0');
        int px = empty % 3;
        int py = empty / 3;
        
        if (pos == correct) {
            return move;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = px + dx[i];
            int ny = py + dy[i];
            
            if (nx < 0 || ny < 0 || nx > 2 || ny > 2) continue;
            
            int nPos = ny * 3 + nx;
            char ch = pos[nPos];
            string next = pos;
            swap(next[empty], next[nPos]);
            
            if (map.find(next) == map.end()) {
                q.push(next);
                map[next] = move + 1;
            }
        }
    }
    return -1;
}

int main() {
    string init = "";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;
            init += to_string(num);
        }
    }

    cout << bfs(init) << endl;

    return 0;
}
