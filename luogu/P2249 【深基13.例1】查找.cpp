#include <iostream>
#include <algorithm>
using namespace std;
const int e6 = 1e6+5;
int a[e6];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int num;
        cin>>num;
        int pos = lower_bound(&a[1],&a[n+1],num) - &a[1];
        if(pos == n) cout<<-1<<" ";
        else{
            if(a[pos+1] == num) cout<<pos+1<<" ";
            else cout<<-1<<" ";
        }
        
    }

    return 0;
}
