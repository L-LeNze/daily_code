#include <iostream>
#include <string>
using namespace std;

// 去前导零（用于整数部分、分子、分母）
string qian_zeros(string t){
    int i = 0;
    while (i < t.size() - 1 && t[i] == '0') i++;
    return t.substr(i);
}

// 去后导零（用于小数部分）
string hou_zeros(string t) {
    int i = t.size() - 1;
    while (i > 0 && t[i] == '0') i--;
    return t.substr(0, i + 1);
}

int main(){
    string s;
    string ans;
    cin>>s;

    ans += s;

    int pos = -1;
    char type = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='.' or s[i]=='/' or s[i]=='%'){
            pos = i;
            type = s[i];
            break;
        }
    }

    if(type == '.' or type == '/' ){
        for(int i=0;i<pos;i++){
            ans[i] = s[pos - i -1 ];
        }
        int j=0;
        for(int i=pos+1;i<s.length();i++){
            ans[i] = s[s.length()-j-1];
            j++;
        }
        ans[pos] = s[pos];
        
        if(type=='.'){
            string left = ans.substr(0,pos);
            string right = ans.substr(pos+1);
            left = qian_zeros(left);
            right = hou_zeros(right);
            cout << left << "." << right;
        }
        else{
            string up = ans.substr(0,pos);
            string down = ans.substr(pos+1);
            up = qian_zeros(up);
            down = qian_zeros(down);
            cout << up << "/" << down;

        }

    }
    else if(type == '%'){
        for(int i=0;i<s.length()-1;i++){
            ans[i] = s[s.length()-2-i];
        }
        
        string num = ans.substr(0,s.length()-1);
        num = qian_zeros(num);
        cout<<num<<"%";
    }

    else{
        for(int i=0;i<s.length();i++){
            ans[i] = s[s.length()-i-1];
        }
        ans = qian_zeros(ans);
        cout<<ans;
    }
    

    return 0;
}