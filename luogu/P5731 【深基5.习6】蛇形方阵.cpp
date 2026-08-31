#include <iostream>
//#include <iomanip>
using namespace std;
int a[10][10];
int main(){
    int n;
    cin>>n;

    int x=1,y=1;
    
    // 定义方向：右下左上
    // dx 表示行坐标的变化，dy 表示列坐标的变化
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir = 0;

    for(int i=1;i<=n*n;i++){
        a[x][y]=i;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx<1 || nx>n ||
             ny<1 || ny>n ||a[nx][ny]!=0){
                dir =(dir + 1 )%4;
                nx = x + dx[dir];
                ny = y + dy[dir];
             }
        x = nx;
        y = ny;
    }

     for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout.width(3); 
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}