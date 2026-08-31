#include <iostream>
using namespace std;
int lights[107][107];
int main(){
    int n,m,k;
    cin>>n>>m>>k;

        for(int i=1;i<=m;i++){
            int xi,yi;
            cin>>xi>>yi;
            for(int dx= -2;dx<=2;dx++){
                for(int dy= -2;dy<=2;dy++){
                    if(abs(dx) + abs(dy) <= 2){
                        if(xi+dx >= 1 && xi+dx <= n && yi+dy >= 1 && yi+dy <= n){
                            lights[xi+dx][yi+dy] = 1; // 标记为有光
                    }
                }
            }
        }
    }
    for(int i=1;i<=k;i++){
        int oi,pi;
        cin>>oi>>pi;
        for(int dx=-2;dx<=2;dx++){
            for(int dy=-2;dy<=2;dy++){
                if(oi+dx >= 1 && oi+dx <= n && pi+dy >= 1 && pi+dy <= n){
                            lights[oi+dx][pi+dy] = 1; // 标记为有光
                    }
            }
        }

    }

    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(lights[i][j] == 0) sum++;
        }
    }
    cout<<sum;

    return 0;
}