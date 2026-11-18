#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct people{
    int time;
    int num;
};
people a[1005];
bool cmp(people a,people b){
    return a.time < b.time;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].time;
        a[i].num = i;
    }
    sort(a+1,a+n+1,cmp);
    double aver =0;
    for(int i=1;i<=n;i++){
        cout<<a[i].num<<" ";
        aver += (double)a[i].time *(n-i);
    }
    cout<<endl;
    printf("%.2lf",aver/n);
    return 0;
}