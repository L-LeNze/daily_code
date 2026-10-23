#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        stack<unsigned long long> st;
        for(int j=1;j<=n;j++){
            string s;
            cin>>s;
            if(s == "push"){
                unsigned long long num;
                cin>>num;
                st.push(num);
            }
            else if(s == "pop"){
                if(!st.empty()) st.pop();
                else cout<<"Empty"<<endl;
            }
            else if(s == "query"){
                if(!st.empty()) cout<<st.top()<<endl;
                else cout<<"Anguei!"<<endl;
            }
            else if(s == "size") cout<<st.size()<<endl;
        }
    }
    return 0;
}