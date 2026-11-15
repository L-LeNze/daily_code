#include <iostream>
using namespace std;
int a[1000005];
int cnt[2005] ={0};
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int left = 1;
    int ans_length = n+1;
    int ans_x = 1,ans_y = 1;
    int kinds = 0;

    for(int right = 1;right<=n;right++){
        cnt[a[right]] ++;
        if(cnt[a[right]] == 1) kinds ++;

        while(kinds == m){
            if(right - left + 1 <ans_length){
                ans_length = right -left +1;
                ans_x = left;
                ans_y = right;
            }

            cnt[a[left]]--;
            if(cnt[a[left]] ==0) kinds--;

            left++;
        }
    }
    cout<<ans_x<<" "<<ans_y;
    return 0;
}