#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<int> q;

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        if(num == 1){
            int x;
            cin>>x;
            q.push(x);
        }
        if(num == 2){
            if(q.empty()){ cout<<"ERR_CANNOT_POP"<<endl; }
            else{ q.pop(); }
        }
        if(num == 3){
            if(q.empty()){ cout<<"ERR_CANNOT_QUERY"<<endl; }
            else{ cout<<q.front()<<endl; }
        }
        if(num == 4){
            cout<<q.size()<<endl;
        }
    }

    return 0;
}