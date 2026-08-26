#include <iostream>
using namespace std;
int a[1007];
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=1){
        count ++;
        a[count] =n;
        if(n%2!=0) n=n*3+1;
        else n/=2;
    }
    cout<<1<<" ";
    for(int i=count;i>=1;i--) cout<<a[i]<<" ";
    

    return 0;
}