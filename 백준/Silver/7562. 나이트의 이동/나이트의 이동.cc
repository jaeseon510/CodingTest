#include<bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[301][301];
int vis[301][301];
int dx[8]={2,2,1,1,-1,-1,-2,-2};
int dy[8]={1,-1,2,-2,2,-2,1,-1};
queue<pair<int,int>> Q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    while(n--){
        int m;
        cin >>m;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                vis[i][j]=-1;
            }
        }
        int x,y,xx,yy;
        cin >>x >>y;
        cin >>xx >>yy;
        Q.push({x,y});
        vis[x][y]=0;
        while(!Q.empty()){
            auto cur = Q.front();Q.pop();
            for(int dir=0;dir<8;dir++){
                int nx=cur.X +dx[dir];
                int ny=cur.Y +dy[dir];
                if(nx<0|| nx>=m || ny < 0 || ny >=m)continue;
                if(vis[nx][ny]>=0)continue;
                vis[nx][ny]=vis[cur.X][cur.Y]+1;
                Q.push({nx,ny});
            }
        }
        cout << vis[xx][yy] <<'\n';
    }
}