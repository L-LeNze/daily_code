#include <iostream>
using namespace std;
long long s[100005];

int main(){
    long long n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>s[i];
    }

    long long max=0;
    long long sum;

    for(int i=1;i<=k;i++){
        sum+=s[i];
    }
    max =sum;

    for(int i=k+1;i<=n;i++){
        sum = sum - s[i-k] + s[i];
        if(sum>=max){
            max =sum;
        }
    }

    // for(int i=1;i<=n-k+1;i++){
    //     long long check = 0;
    //     for(int j=i;j<=i+k-1;j++){
    //         check += s[j];
    //     }
    //     if(max<=check) max =check;
    // }
    cout<<max;
    return 0;
}