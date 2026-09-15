#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s;
    n = s.length();
    cout<<n;

    char flag = '0';
    int count = 0;
    
    for(int i=0;i<n;i++){
        if(s[i]==flag) count++;
        else{
            cout<<" "<<count;
            flag = s[i];
            count = 1;
        }
    }

    for(int i=1;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]==flag) count++;
            else{
                cout<<" "<<count;
                flag = s[j];
                count=1;
            }
        }
    }
    cout<<" "<<count;

    return 0;
}