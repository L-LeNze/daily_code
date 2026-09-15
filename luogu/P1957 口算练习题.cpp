#include <iostream>
#include <string>

using namespace std;
int main(){
    int n;
    cin>>n;

    char oper = 'a';
    string s;

    for(int i=0;i<n;i++){
        cin>>s;

        int num1,num2;

        if(s == "a" or s == "b"
             or s == "c"){
                oper = s[0];

                cin>>num1>>num2;
                
        }
    }


    return 0;
}