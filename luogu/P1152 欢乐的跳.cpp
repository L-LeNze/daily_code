#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector <int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector <bool> check(n+7,false);     // 这是标记数组，用来标记是否出现过这个差值
                                        // 差值最大可能是 n-1，所以开 n+5 的大小足够了,其他再大的差值就判错了

    bool isjolly = 1;

    for(int i=0;i<n-1;i++){
        int diff = abs(a[i]-a[i+1]);

        if(diff < 1 or diff > n-1){ isjolly = false; break;}

        if(check[diff] == true) { isjolly = false; break;}

        check[diff] = true;
    }


    if(isjolly == true) cout<<"Jolly";
    else cout<<"Not jolly";
    return 0;
}