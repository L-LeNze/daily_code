#include <iostream>
#include<algorithm>
using namespace std;
int a[5000005];
int d[5000005];
int main(){
    int n,p;
    cin>>n>>p;
    a[0]=0;
    d[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[i]=a[i] - a[i-1];
    }
    for(int i=1;i<=p;i++){
        int x,y,z;
        cin>>x>>y>>z;
        d[x] += z;
        d[y+1] -= z;
    }
    for(int i=1;i<=n;i++){
        a[i] = a[i-1] + d[i];
    }
    sort(&a[1],&a[n+1]);

    cout<<a[1];

    return 0;
}