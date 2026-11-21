#include <iostream>
using namespace std;
bool horse[25][25];
long long dp[25][25];
int main(){
    int n,m;
    int x,y;
    cin>>n>>m>>x>>y;
    n+=2; m+=2; x+=2; y+=2;
    horse[x][y] = 1;
    horse[x-1][y-2] = 1;
    horse[x-2][y-1] = 1;
    horse[x-2][y+1] = 1;
    horse[x-1][y+2] = 1;
    horse[x+2][y+1] = 1;
    horse[x+1][y+2] = 1;
    horse[x+2][y-1] = 1;
    horse[x+1][y-2] = 1;

    dp[2][2] = 1;
    for(int i=2;i<=n;i++){
        if(horse[i][2]) break;
        dp[i][2] = 1;
    }
    for(int j=2;j<=m;j++){
        if(horse[2][j]) break;
        dp[2][j] =1;
    }
    for(int i=3;i<=n;i++){
        for(int j=3;j<=m;j++){
            if(horse[i][j]) dp[i][j] =0;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout<<dp[n][m];
    return 0;
}