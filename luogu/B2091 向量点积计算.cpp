#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a(n+7);
    vector <int> b(n+7);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+= a[i]*b[i];
    }
    cout<<ans;
    return 0;
}