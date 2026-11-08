#include <iostream>
using namespace std;
int num[100005];
int n,m;

bool check(int mid){
    long long sum = 0;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        sum += num[i];
        if(sum > mid){
            cnt++;
            sum = num[i];
        }
    }
    if(cnt <= m) return true;
    else return false;
}
int main(){
    cin>>n>>m;
    long long left = 0;
    long long right = 0;
    long long ans = 1;
    for(int i=1;i<=n;i++){
        cin>>num[i];
        right += num[i];
        if(num[i] > left) left = num[i];
    }
    while(left <= right){
        int mid = left + (right - left)/2;
        if(check(mid)){
            ans = mid;
            right = mid -1;
        }
        else left = mid +1;
    }
    cout<<ans;
    return 0;
}