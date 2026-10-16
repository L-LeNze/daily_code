#include <iostream>
#include <queue>
using namespace std;
int step[405][405];
struct node{
    int x;
    int y;
};
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {1,-1,2,-2,2,-2,1,-1};
int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            step[i][j] =-1;
        }
    }

    queue<node> q;
    step[x][y] = 0;
    q.push({x,y});

    while(!q.empty()){
        node now = q.front();  //取出队首坐标
        q.pop();

        for(int i=0;i<8;i++){
            int nx = now.x + dx[i];
            int ny = now.y + dy[i];

            if(nx<1 || nx>n || ny<1 || ny>m) continue;
            // 如果越界了就跳过这一轮，开始下一轮
            if(step[nx][ny] != -1) continue;
            // 如果不等于-1就说明走过了，继续下一轮；

            step[nx][ny] = step[now.x][now.y] + 1;
            // 表示从now.x now.y到达nx ny需要多一步
            q.push({nx,ny});
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<step[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}