#include <iostream>
#include <algorithm>
using namespace std;
int a[1005][5005];
int dp[1005][5005];
int main(){
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    for(int i=2;i<=r;i++){
        for(int j=1;j<=i;j++){
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) +a[i][j];
        }
    }
    int ans = 0;
    for(int i=1;i<=r;i++){
        if(dp[r][i] >= ans) ans = dp[r][i];
    }
    cout<<ans;
    return 0;
}