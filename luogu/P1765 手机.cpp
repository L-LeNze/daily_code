#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int i=0;
    int count = 0;

    while( i<s.length() ){
        if(s[i] == ' ') count ++;
        else if(s[i]=='a' or s[i]=='d' or
             s[i]=='g' or s[i]=='j' or s[i]=='m' or
             s[i]=='p' or s[i]=='t' or s[i]=='w') count++;

        else if (s[i]=='b' or s[i]=='e' or
             s[i]=='h' or s[i]=='k' or s[i]=='n' or
             s[i]=='q' or s[i]=='u' or s[i]=='x') count +=2;

        else if (s[i]=='c' or s[i]=='f' or
             s[i]=='i' or s[i]=='l' or s[i]=='o' or
             s[i]=='r' or s[i]=='v' or s[i]=='y') count +=3;

        else if (s[i]=='s' or s[i]=='z') count +=4;

        i++;
        
        
    }
    
    cout<<count;

    return 0;
}