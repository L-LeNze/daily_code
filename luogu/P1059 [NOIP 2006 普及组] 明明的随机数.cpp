#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;

    set<int> se;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        se.insert(num);
    }

    cout<<se.size()<<endl;
    for(int x : se){
        cout<<x<<" ";
    }
    return 0;
}