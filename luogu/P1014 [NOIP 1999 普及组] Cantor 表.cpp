#include <iostream>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    int sum=0;
    while(sum + k < n){
        sum += k;
        k++;
    }
    int pos = n-sum;

    int fenzi,fenmu;

    if(k%2==0) {
        fenzi = pos;
        fenmu = k+1-pos;
    }
    else{
        fenmu = pos;
        fenzi = k+1-pos;
    }

    cout<<fenzi<<"/"<<fenmu;
    return 0;
}