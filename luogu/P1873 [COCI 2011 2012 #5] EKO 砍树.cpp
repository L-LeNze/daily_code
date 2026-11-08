#include <iostream>
using namespace std;
int tree[1000005];
int n;
long long m;
bool check(int mid){
    long long sum = 0;
    for(int i=1;i<=n;i++){
        if(tree[i] > mid) sum += tree[i] - mid;
        if(sum >= m) return true;
    }
    return false;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>tree[i];
    }
    
    int left = 0;
    int right = 400006;

    int ans = 0;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(check(mid)){
            ans = mid;
            left = mid +1;
        }
        else{
            right = mid -1;
        }
    }
    cout<<ans;
    return 0;
}