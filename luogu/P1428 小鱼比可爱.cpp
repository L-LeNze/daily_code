#include <iostream>
using namespace std;
int a[107];
int ans[107];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin >>a[i];
        for(int j=1;j<=i;j++){
            if(a[i]>a[j]) ans[i]++;
        }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}