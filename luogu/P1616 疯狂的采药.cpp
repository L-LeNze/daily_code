#include <iostream>
#include <algorithm>
using namespace std;
long long dp[10000005];
int a[10005];
int b[10005];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
        for(int j=a[i];j<=t;j++){
            dp[j] = max(dp[j],dp[j-a[i]] + b[i]);
        }
    }
    cout<<dp[t];
    return 0;
}