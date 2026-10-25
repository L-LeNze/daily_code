#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    stack<int> st_num;
    int curr_num=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '@') break;
        if(s[i]>='0' and s[i] <='9'){
            curr_num = curr_num*10 + (s[i]-'0'); 
        }
        else if(s[i]=='.'){
            st_num.push(curr_num);
            curr_num = 0;
        }

        if(s[i]=='+'){
            int b = st_num.top();
            st_num.pop();
            int a = st_num.top();
            st_num.pop();
            st_num.push(a+b);
        }
        else if(s[i]=='-'){
            int b = st_num.top();
            st_num.pop();
            int a = st_num.top();
            st_num.pop();
            st_num.push(a-b);
        }
        else if(s[i]=='*'){
            int b = st_num.top();
            st_num.pop();
            int a = st_num.top();
            st_num.pop();
            st_num.push(a*b);
        }
        else if(s[i]=='/'){
            int b = st_num.top();
            st_num.pop();
            int a = st_num.top();
            st_num.pop();
            st_num.push(a/b);
        }
    }
    cout<<st_num.top();
    return 0;
}