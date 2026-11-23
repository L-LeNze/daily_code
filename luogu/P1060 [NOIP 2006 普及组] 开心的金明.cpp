#include <iostream>
#include <algorithm>
using namespace std;
int p[30];
int w[30];
int to[30];
long long dp[30][30005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>w[i]>>p[i];
        to[i] = w[i] * p[i];
        for(int j=1;j<=n;j++){
            dp[i][j] = dp[i-1][j];
            if(j>=w[i]) dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] + to[i]);
        }
    }
    cout<<dp[m][n];
    return 0;
}