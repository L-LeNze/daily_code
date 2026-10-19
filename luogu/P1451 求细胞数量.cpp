#include <iostream>
#include <queue>
using namespace std;
char c[105][105];
bool vis[105][105];
struct node{
    int x;
    int y;
};
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >>c[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            vis[i][j] = 0;
        }
    }

    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int ans=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j] != '0' && vis[i][j] == 0){
                queue<node> q;
                ans++;
                vis[i][j]=1;
                q.push({i,j});
                
                while(!q.empty()){
                    node now = q.front();
                    q.pop();

                    for(int k=0;k<4;k++){
                        int nx = now.x + dx[k];
                        int ny = now.y + dy[k];

                        if(nx<1 || nx>n || ny<1 || ny>m) continue;
                        if(vis[nx][ny] == true ) continue;
                        if(c[nx][ny] == '0') continue;

                        q.push({nx,ny});
                        vis[nx][ny] = 1;
                    }
                }
            }
        }
    }

    cout<<ans;
    return 0;
}