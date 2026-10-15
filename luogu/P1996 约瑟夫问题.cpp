#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int m,n;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int cnt=1;
    while(!q.empty()){
        if(cnt != m){
            cnt++;
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        else{
            cout<<q.front()<<" ";
            cnt = 1;
            q.pop();
        }
    }

    return 0;
}