#include <iostream>
using namespace std;
int main(){
    long long a,b;
    long long once_max;
    cin>>a>>b>>once_max;

    long long mx=0,mn=0;
    if(a>b){ mx =a; mn =b;}
    else {mx =b; mn =a;}

    a=mx;
    b=mn;

    long long cha = (a-b)/2;

    if((a+b)%2!=0) cout<<-1;

    else if(cha ==0) cout<<0;

    else{

        long long count = 0;

        count = (cha + once_max - 1) / once_max;

        cout<<count;
    }
    

    return 0;
}