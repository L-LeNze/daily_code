#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue <int,vector<int>,greater<int>> q;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        q.push(num);
    }
    int ans=0;
    while(q.size()>1){
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        ans += a+b;
        q.push(a+b);
    }
    cout<<ans;
    return 0;
}