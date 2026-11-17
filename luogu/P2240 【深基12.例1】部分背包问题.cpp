#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct object{
    int m;
    int v;
    double aver;
};
object a[105];

bool cmp(object a,object b){
    return a.aver > b.aver;
}
int main(){
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i].m>>a[i].v;
        a[i].aver = (double)a[i].v / a[i].m;
    }

    sort(&a[1],&a[n+1],cmp);
    int total = 0;
    int i = 1;
    double ans = 0;
    while(i<=n){
        if(total + a[i].m <= t){
            total+=a[i].m;
            ans += (a[i].aver * a[i].m);
            i++;
        }
        else {
            ans += (a[i].aver * (t-total));
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}