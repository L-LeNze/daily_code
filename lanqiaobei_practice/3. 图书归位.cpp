#include <iostream>
using namespace std;
int a[2007];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=2;i<=n;i+=2){
        if(a[i]%2!=0) {
            cout<<-1;
            return 0;
        }
    }
    for(int i=1;i<=n;i+=2){
        if(a[i]%2==0) {
            cout<<-1;
            return 0;
        }
    }

    int ji_sum=0,ou_sum=0;
    for(int i=1;i<=n;i+=2){
        for(int j=i+2;j<=n;j+=2){
            if(a[i]>a[j]) ji_sum++;
        }
    }
    for(int i=2;i<=n;i+=2){
        for(int j=i+2;j<=n;j+=2){
            if(a[i]>a[j]) ji_sum++;
        }
    }

    cout<< ji_sum + ou_sum ;
    

    return 0;
}