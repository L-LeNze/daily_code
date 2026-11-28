#include <iostream>
using namespace std;
long long dp[45][785];       // 表示方案数
int main(){
    int n;
    cin>>n;
    int check = (n+1)*n/2;
    if(check %2 !=0) cout<<0;

    else{
        dp[0][0] = 1;
        int half =  check/2;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=half;j++){
                if(j>=i)
                dp[i][j] = dp[i-1][j] + dp[i-1][j-i];
                else dp[i][j] = dp[i-1][j];
            }
        }
        cout<<dp[n][half]/2;
    }
    return 0;
}