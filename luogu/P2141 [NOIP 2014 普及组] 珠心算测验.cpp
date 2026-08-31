#include <iostream>
using namespace std;
int a[107];
int var[20007];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){ cin>>a[i];  var[i] = 0;}

    int ans=0;

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int sum = a[i]+a[j];

            for(int k=1;k<=n;k++){
                if(a[k]==sum and var[a[k]]==0){
                    var[a[k]]=1;

                    ans++;
                    break;
                }
            }
        }
    }

        cout<<ans;

    return 0;
}