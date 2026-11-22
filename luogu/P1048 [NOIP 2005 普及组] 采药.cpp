#include <iostream>
#include <algorithm>
using namespace std;
int w[105];
int v[105];
int dp[1005];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>w[i]>>v[i];
        for(int j=t; j>=w[i]; j--){
            dp[j] = max(dp[j] , dp[j - w[i]] + v[i]); 
        }
    }
    cout<<dp[t];
    return 0;
}