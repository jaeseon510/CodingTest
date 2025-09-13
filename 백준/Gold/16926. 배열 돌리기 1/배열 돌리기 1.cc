#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> origin,int n, int m){
    vector<vector<int>> temp = origin;

    int repeat = min(n,m) / 2;
    bool visited[300][300] = {false,};

    for(int size = 0; size < repeat; size++){
        int cntX = size, cntY = size;

        // 다시 한번 시작위치를 방문할 때 까지 반복
        while(!visited[cntX][cntY]){
            visited[cntX][cntY] = true;
            // 위 일때
            if(cntX == size && cntY != m-1-size){
                temp[cntX][cntY] = origin[cntX][cntY+1];
                cntY++;
            }
            // 오른쪽 일 때
            else if(cntY == m-1-size && cntX != n-1-size){
                temp[cntX][cntY] = origin[cntX+1][cntY];
                cntX++;
            }
            // 아래 일 때
            else if(cntX == n-1-size && cntY != size){
                temp[cntX][cntY] = origin[cntX][cntY-1];
                cntY--;
            }
            // 왼쪽 일 때
            else if(cntY == size && cntX != size){
                temp[cntX][cntY] = origin[cntX-1][cntY];
                cntX--;
            }
        }
    }
    return temp;
}
int main(){
    int N,M,R;
    vector<vector<int>> map;
    cin >> N >> M >> R;
    for(int i = 0; i < N; i++){
        vector<int> tmp;
        for(int j = 0; j < M; j++){
            int val;
            cin >> val;
            tmp.push_back(val);
        }
        map.push_back(tmp);
    }
    vector<vector<int>> answer;
    while(R--) map = solution(map,N,M);
    answer = map;

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << '\n';
    }

}