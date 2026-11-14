#include <iostream>
using namespace std;
int a[1005][1005];
int d[1005][1005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        d[x1][y1] ++;
        d[x2+1][y1] --;
        d[x1][y2+1] --;
        d[x2+1][y2+1] ++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + d[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}