#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int main(){
    int n,k;
    long long c,b;
    cin>>n>>k>>c>>b;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    long long total = c;
    int now_num = 1;
    long long now_site = 0;

    while(total < b && now_num <=n ){
        total += a[now_num];
        if(now_site+1 >k ){
            total += c;
            now_site = 1;
        }
        else now_site += 1;

        if(total > b) break;
        now_num++;
    }

    cout<<now_num-1;
    return 0;
}