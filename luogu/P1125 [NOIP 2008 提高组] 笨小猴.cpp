#include <iostream>
#include <string>
using namespace std;

int sum[26];
bool isprime(int diff){
    if(diff<2) return false;
    for(int i=2;i*i<=diff;i++){
        if(diff % i == 0) return 0;
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    int maxn=0;
    int minn=100;

    for(int i=0;i<s.length();i++){
        sum[s[i]-'a'] ++;
    }

    for(int i=0;i<26;i++){
        if(sum[i]>0){
            if(sum[i] > maxn) maxn =sum[i];
            if(sum[i] < minn) minn =sum[i];
        }
        
    }

    int diff = maxn - minn;

    if(isprime(diff)){
        cout << "Lucky Word" << endl;
        cout << diff << endl;
    } else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }

    return 0;
}