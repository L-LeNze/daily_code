#include <iostream>
#include <algorithm>
using namespace std;
int dp[10005]; // 表示消耗体力为j时，能填的最大体积
int main(){
    int v,n,c;
    cin>>v>>n>>c;
    for(int i=1;i<=n;i++){
        int k,m;
        cin>>k>>m;
        for(int j=c;j>=m;j--){
            dp[j] = max(dp[j],dp[j-m]+k);
        }
    }
    if(dp[c] < v) cout<<"Impossible";
    else{
        for(int j=0;j<=c;j++){
            if(dp[j] >= v){
                cout<<c-j;
                break;
            }
        }
    }
    return 0;
}