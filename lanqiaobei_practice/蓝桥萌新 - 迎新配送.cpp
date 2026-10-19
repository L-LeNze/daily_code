#include <iostream>
#include <algorithm>
using namespace std;
long long d[100005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    sort(d+1,d+n+1);

    long long ans = 0;
    for(int i=1;i<=n-1;i++){
        ans += d[i]*2;
    }
    ans += d[n];
    cout<<ans;

    return 0;
}