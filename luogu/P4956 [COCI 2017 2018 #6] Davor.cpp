#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total_time = 52*7;            // N = 52 * (7X + 21K)     N / 364 = X + 3K

    int m = n/364;
    int x = m-3;
    int k =1;

    while (x>100){
        k++;
        x = m-3*k;
    }

    cout<<x<<endl<<k;

     
    return 0;
}