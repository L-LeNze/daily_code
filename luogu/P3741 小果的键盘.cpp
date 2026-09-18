#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;

    int count=0;

    for(int i=0;i<n-1;i++){
        if(s[i]=='V' and s[i+1]=='K'){
            count++;
            s[i]='X';
            s[i+1]='X';
        }
    }

    for(int i=0;i<n-1;i++){
        if(s[i]=='V' and s[i+1] == 'V' ){
            count++;
            break;
        }
        if (s[i] == 'K' && s[i+1] == 'K') {
            count++;
            break;
    }
}

    cout<<count;

    return 0;
}