#include <iostream>
using namespace std;
int a[1007];
int main(){
     int n;
    int count = 0; // 记录一共输入了多少个数字
    
    // 循环读入，只要读到的不是 0，就存进数组
    while(cin >> n && n != 0) { 
        a[count] = n;
        count++;
    }
    
    // 倒着输出：从最后一个存进去的数字开始，一直输出到第一个
    for(int i = count - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}