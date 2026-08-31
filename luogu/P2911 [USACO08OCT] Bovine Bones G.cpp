#include <iostream>
using namespace std;
int a[27],b[27],c[47];
int sum_times[87];
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;

    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                sum_times[i+j+k] ++;
            }
        }
    }

    int max_times = 0;
    int ans;

    for(int i=1;i<=80;i++){
        if(max_times < sum_times[i])  {
            max_times = sum_times[i];
            ans =i;
        }
    }
    cout<<ans;
    return 0;
}