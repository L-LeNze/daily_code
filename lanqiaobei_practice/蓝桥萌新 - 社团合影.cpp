#include <iostream>
#include <algorithm>
using namespace std;
int h[100005];
int main(){
    int n;
    long long k;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    sort(h+1,h+n+1);

    int max_num=0;
    int num=0;
    int left = 1; // 左指针
    for(int right = 1;right<=n;right++){
        while(h[right] - h[left] > k) left++;   // 滑动窗口
        num = right - left +1;
        if(max_num <= num) max_num = num;
    }
    
    cout<<max_num;
    return 0;
}

// for(int i=1;i<=n;i++){         // 时间复杂度O(n*n)太久了超时
//         for(int j=i;j<=n;j++){
//             if(h[j] - h[i] <= k) num++;
//             else break;
//         }
//         if(max_num <= num) max_num = num;
//         num = 0;
//     }