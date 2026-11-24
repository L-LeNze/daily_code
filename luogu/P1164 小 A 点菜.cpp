#include <iostream>
using namespace std;
int dp[100][10005];
int main(){
    int n,m;
    cin>>n>>m;
    dp[0][0] = 1;
    for(int i=1;i<=n;i++){
        int w;
        cin>>w;
        for(int j=0;j<=m;j++){
            dp[i][j] = dp[i-1][j];
            if(j>=w)
            dp[i][j] = dp[i-1][j] + dp[i-1][j-w];
        }
    }
    cout<<dp[n][m];
    return 0;
}