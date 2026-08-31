#include <iostream>
using namespace std;
int tree[10007];
int main(){
    int l,m;
    cin>>l>>m;

    for(int i=0;i<=l;i++){
        tree[i]=1;
    }
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){ tree[j]= 0;}
    }

    int sum=0;
    for(int i=0;i<=l;i++){
        if(tree[i]==1) sum++;
    }

    cout<<sum;

    return 0;
}