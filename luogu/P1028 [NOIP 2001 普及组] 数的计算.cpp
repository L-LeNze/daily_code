#include <iostream>
using namespace std;

int dp[1007];
int fun(int n){            //fun(n) 记录当n为尾数的时候，有多少个合法的数列
    if(dp[n]!=0) return dp[n];
    int ans=1;
    for(int i=1;i<=n/2;i++){
        ans+=fun(i);
    }
    dp[n] = ans;
    return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);

    return 0;
}