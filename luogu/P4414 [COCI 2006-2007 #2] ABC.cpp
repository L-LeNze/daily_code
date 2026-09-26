#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int A = min(a,min(b,c));
    int C = max(a,max(b,c));
    int B = a+b+c-A-C;


    string s;
    cin>>s;
    
    for(int i=0;i<3;i++){
        if(s[i] == 'A'){
            cout<<A;
        }
        else if(s[i] == 'B'){
            cout<<B;
        }
        else if(s[i] == 'C'){
            cout<<C;
        }
        if(i<2){
            cout<<" ";
        }
    }

    return 0;
}