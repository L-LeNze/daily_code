#include <iostream>
#include<algorithm>
using namespace std;
int a[30005];
int main(){
    int w,n;
    cin>>w>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(&a[1],&a[n+1]);
    int left = 1, right = n;
    int ans = 0;
    while(left <=right){
        if(left == right){
            ans++;
            left++;
            break;
        }
        if(a[left] + a[right] <=w){
            ans++;
            left++;
            right--;
        }
        else{
            ans++;
            right--;
        }
    }
    cout<<ans;
    return 0;
}