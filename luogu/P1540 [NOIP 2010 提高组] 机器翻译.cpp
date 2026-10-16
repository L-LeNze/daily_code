#include <iostream>
#include <queue>
using namespace std;
bool in_word[1007];
int main(){
    int m,n;
    cin>>m>>n;
    int times=0;
    queue<int> q;
    for(int i=1;i<=n;i++){
        in_word[i] = false;
    }
    for(int i=1;i<=n;i++){
        int word;
        cin>>word;

        if(in_word[word] == true) continue;

        else{
            times++;
            if(q.size( )== m){
                int out_word = q.front();
                q.pop();
                in_word[out_word] = false;
                q.push(word);
                in_word[word] = true;
            }
            else{
                q.push(word); 
                in_word[word] = true;
            }

            }
    }   

    cout<<times;

    return 0;
}