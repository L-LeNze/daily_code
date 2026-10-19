#include <iostream>
using namespace std;
int main(){
    long long n,l,r;
    cin>>n>>l>>r;

    long long now_page = l;
    long long paper = 0;
    int nomal_page = 0;
    if(l%2 == 0 ) nomal_page ++;
    if(r%2 != 0 && r<n) nomal_page ++;

    if(l%2 == 0 ){
        paper += 1;
        now_page++;
        while(now_page <= r){
            if(now_page %2 != 0) paper++;
            
            now_page++;
        }
    }
    else{
        while(now_page <= r){
            if(now_page %2 != 0) paper++;
            
            now_page++;
        }
    }
    cout<<paper<<" "<<nomal_page;
    return 0;
}