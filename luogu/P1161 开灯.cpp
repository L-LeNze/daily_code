#include <iostream>
using namespace std;
int lights[2000007];
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        double a;
        int t;
        cin>>a>>t;

        for(int j=1;j<=t;j++){
            int id = int (j*a);

            if(lights[id]==0) lights[id]++;
            else lights[id] = 1- lights[id];
        }
    }

    for(int i=1;i<=2000000;i++){
        if(lights[i]== 1){
            cout<<i;
            break;
        }
    }

    return 0;
}