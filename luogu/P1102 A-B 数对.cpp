#include <iostream>
#include <algorithm>
using namespace std;
int d[200005];
int main(){
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }

    long long ans = 0;

    sort(&d[1],&d[n+1]);
    for(int i=1;i<n;i++){
        int b = d[i];
        long long a = (long long)b+c;

        ans += upper_bound(&d[i],&d[n+1],a) -
        lower_bound(&d[i],&d[n+1],a);

    }

    cout<<ans;

    return 0;
}