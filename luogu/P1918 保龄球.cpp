#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;

    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        mp[num] = i;
    }

    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int bottles;
        cin>>bottles;
        
        if(mp.count(bottles)){
            cout<<mp[bottles]<<endl;
        }
        else cout<<0<<endl;

    }
    return 0;
}
//         if(bottles > mp[mp.size()]){
//             cout<<0<<endl;
//             continue;
//         }
        
//         for(auto key : mp){
//             if(bottles == key.first){
//                 cout<<key.first<<endl;
//                 break;
//             }
//         }