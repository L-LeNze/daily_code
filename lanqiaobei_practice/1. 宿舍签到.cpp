#include <iostream>
using namespace std;

int main(){
    int  n,k;
    cin>>n>>k;
    int count=0;

    count = n/k;
    if(n%k!=0){
        count++;
    }
    cout<<count;
    return 0;
}