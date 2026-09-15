#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s); // 必须用 getline 读取带空格的一整行

    int ans=0;

    for(int i=0;i<s.length();i++){
        if(s[i] != ' ' and s[i] != '\n'){
            ans++;
        }
    }

    cout<<ans;
    return 0;
}