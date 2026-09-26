#include <iostream>
using namespace std;

long long dp[25][25][25];
int fun(long long a,long long b,long long c){
    

    long long ans;

    if(a<=0 or b<=0 or c<=0) return 1;
    if(a>20 or b>20 or c>20) return fun(20,20,20);

    if(dp[a][b][c] != 0) return dp[a][b][c];

    if(a<b and b<c) ans = 
    fun(a,b,c-1) + fun(a,b-1,c-1) - fun(a,b-1,c);

    else ans =  fun(a-1,b,c)+fun(a-1,b-1,c)
    +fun(a-1,b,c-1)-fun(a-1,b-1,c-1);

    dp[a][b][c] = ans;
    return ans;
}
int main(){

    long long a,b,c;
    while(cin>>a>>b>>c){
        if(a==-1 && b==-1 && c==-1) break;


        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<fun(a,b,c)<<endl;
    }


    return 0;
}