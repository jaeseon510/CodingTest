#include <iostream>

using namespace std;


int N,M,R;
int map[301][301];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void rotate(int start, int size){
    int repeat = R%size;

    while(repeat--){
        int val = map[start][start];
        int x = start;
        int y = start;
        int k = 0;

        while(k < 4){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx == start && ny == start) break;
            if((start <= nx && nx < N- start) && (start <= ny && ny < M-start)){
                map[x][y] = map[nx][ny];
                x = nx; 
                y = ny;
            }
            else k++;
        }
        map[start+1][start] = val;
    }
}
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    cin >> N >> M >> R;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) cin >> map[i][j];
    int sizeN = N;
    int sizeM = M;

    int mapSize = min(N,M)/2;

    for(int i = 0; i < mapSize; i++){
        rotate(i,sizeN*2+(sizeM-2)*2);
        
        sizeN -= 2;
        sizeM -= 2;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cout << map[i][j] << " ";
        cout << "\n";
    }
}