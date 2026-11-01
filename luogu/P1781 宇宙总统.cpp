#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct object{
    string paper_num;
    int num;
};

bool cmp(object a,object b){
    if(a.paper_num.size() != b.paper_num.size()) 
    return a.paper_num.size() > b.paper_num.size();
    else return a.paper_num > b.paper_num;
}

object ob[25];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>ob[i].paper_num;
        ob[i].num = i;
    }
    sort(&ob[1],&ob[n+1],cmp);
    cout<< ob[1].num << endl <<ob[1].paper_num;
    return 0;
}