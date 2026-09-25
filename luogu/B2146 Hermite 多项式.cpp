#include <iostream>
using namespace std;
long long fun(int n,double x){
    if(n==0) return 1;
    else if(n==1) return 2*x;
    else if(n>1) 
        return 2*x*fun(n-1,x)-2*(n-1)*fun(n-2,x);
}
int main(){
    int n;
    double x;
    cin>>n>>x;

    cout<<fun(n,x);

    return 0;
}