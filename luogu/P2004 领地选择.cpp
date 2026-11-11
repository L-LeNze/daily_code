#include <iostream>
using namespace std;
int a[1005][1005];
long long s[1005][1005];
int main(){
    int n,m,c;
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            s[i][j] = s[i-1][j] + s[i][j-1]
            + a[i][j] -s[i-1][j-1];
        }
    }
    long long max = -1e5;
    int ans_row,ans_col;
    for(int i=c;i<=n;i++){
        for(int j=c;j<=m;j++){
            long long check = s[i][j] - s[i][j-c]
            - s[i-c][j] + s[i-c][j-c];
            if(max < check){
                max = check;
                ans_row = i-c+1;
                ans_col = j-c+1;
            }
        }
    }
    cout<<ans_row<<" "<<ans_col;
    return 0;
}