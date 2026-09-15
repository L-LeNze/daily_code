#include <iostream>
using namespace std;
int a[207][207];
int main(){
    int n;
    cin>>n;
    
    int row =1,col =1;
    int flag =0;

    while(row<=n){
        int cot;
        cin>>cot;
        for(int i=1;i<=cot;i++){
            a[row][col] = flag;
            col++;
            if(col>n){
                col =1;
                row++;
            }
        }
        flag = 1- flag;

    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j];
        }
        cout << endl; // 每打印完一行，换行
    }
    
      


    return 0;
}