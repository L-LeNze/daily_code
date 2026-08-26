#include <iostream>
using namespace std;
int a[17];
int sheng[17];
int main(){
    int cun =0;
    int ans=0;
    sheng[0]=0;
    a[0]=0;

    for(int i=1;i<=12;i++){
        cin>>a[i];
    }
    for(int i =1;i<=12;i++){
        sheng[i] = sheng[i-1]+300;

        if(sheng[i]<a[i]){ cout<< "-"<<i; return 0; }
        else {
            sheng[i]-=a[i];

            while(sheng[i]>=100){
                cun +=100;
                sheng[i]-=100;

            }
        }
            
        
    }
        ans = sheng[12] + (cun * 12) / 10;
        cout<<ans;
    

    return 0;
}