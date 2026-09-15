#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, line;
    getline(cin, s);
    getline(cin, line);

    // 1. 把单词和文章全部转为小写（因为题目不区分大小写）
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')
            line[i] += 32;
    }

    int count = 0, first_pos = -1;
    int i=0;

    while(i<line.length()){
        while (i<line.length() and  line[i] == ' ') i++;

        if(i>=line.length())  break;

        int start_pos = i;
        string word ="";

        while (i<line.length() and line[i] !=' '){
            word += line[i];
            i++;
        }

        if(word == s){
            count++;
            if(first_pos == -1){
                first_pos = start_pos;
            }
        }

    }

    if(count == 0) cout<<-1;
    else{
        cout<<count<<" "<<first_pos;
    }

    return 0;
}