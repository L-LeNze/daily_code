#include <iostream>
using namespace std;
int a[45][45];
int main(){
    int n;
    cin>>n;
    a[1][n/2+1] = 1;

    int row = 1;
    int col = n/2+1;

    for(int i=2;i<=n*n;i++){
        if( row == 1 and col != n){
            row = n;
            col++;
        }

        else if(col == n and row !=1){
            col = 1;
            row--;
        }

        else if( row ==1 and col == n){
            row++;
        }

        else if(row != 1 and col!= n){
            if(a[row-1][col+1] == 0){ 
                row--;
                col++;
            }
            else { row++; }
        }
        a[row][col] =i;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}