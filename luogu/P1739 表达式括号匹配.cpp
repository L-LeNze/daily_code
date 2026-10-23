#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<char> st;
    string s;
    getline(cin,s);

    for(int i=0;i<s.size();i++){
        if(s[i] == '@') break;

        if(s[i] == '(') st.push('(');

        else if(s[i] == ')'){
            if(st.empty()){
                cout<<"NO";
                return 0;
            }
            else st.pop();
        }
    }
    if(st.empty()) cout<<"YES";
    else cout<<"NO";

    return 0;
}

    // char end;

    // while( cin>>end ){
    //     if(end == '@') break;
    //     st.push(end);
    // }

    // int qua=0;
    // while(!st.empty()){
    //     char check = st.top();
    //     if(check == ')') qua++;
    //     if(check == '(') qua--;
    //     st.pop();
    // }

    // if(qua == 0) cout<<"YES";
    // else cout<<"NO";
    // return 0;