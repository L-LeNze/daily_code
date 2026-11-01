#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int chi;
    int math;
    int engl;
    int total;
    int num;
};

bool cmp(student a , student b){
    if(a.total != b.total) return a.total > b.total;
    else if(a.chi != b.chi) return a.chi > b.chi;
    else return a.num < b.num;
}
student s[305];    // 结构体开数组

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].chi >> s[i].math >> s[i].engl;
        s[i].total = s[i].chi + s[i].math + s[i].engl;
        s[i].num = i;
    }

    sort(s+1 , s+n+1 ,cmp);

    for(int i=1;i<=5;i++){
        cout<< s[i].num <<" "<< s[i].total <<endl;
    }

    return 0;
}