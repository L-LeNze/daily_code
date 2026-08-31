#include <iostream>
using namespace std;
int a[3007];
int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>a[i];

    }

    int min = 300000;

    for(int i=1;i<=n-m+1;i++){
        int check_min = 0;
        for(int j=i;j<=i+m-1;j++){
            check_min += a[j];
        }
        if(min > check_min) min = check_min;
    }

    cout<<min;
    return 0;
} 