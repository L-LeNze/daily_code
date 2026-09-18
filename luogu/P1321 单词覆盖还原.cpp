#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;

    int boy_count=0;
    int girl_count=0;

    for(int i=0;i<s.length();i++){
        
         if(i + 3 < s.length()  and s[i] =='g' and s[i+1] =='i' and s[i+2]=='r' and s[i+3]=='l'){
            girl_count++;
            i+=3;
        }
        else if(i + 2 < s.length() and s[i] =='b' and s[i+1] =='o' and s[i+2]=='y'){
            boy_count++;
            i+=2;
        }
        else if (s[i] == 'b' || s[i] == 'o' || s[i] == 'y') {
            // 说明这里有 boy 的痕迹（哪怕只剩一个字母），算一个 boy
            boy_count++;
        }
        else if (s[i] == 'g' || s[i] == 'i' || s[i] == 'r' || s[i] == 'l') {
            // 说明这里有 girl 的痕迹
            girl_count++;
        }
    }

    cout<<boy_count<<endl<<girl_count<<endl;

    return 0;
}
