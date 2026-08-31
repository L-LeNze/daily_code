#include <iostream>
using namespace std;

int price[10];       // 中奖号码
int ming[1007][10];  // 买的彩票
int ans[10];         // 存7个奖项的个数

int main(){
    int n;
    cin >> n;

    // 读入中奖号码
    for(int i=0; i<7; i++){
        cin >> price[i];
    }

    // 读入所有彩票
    for(int i=1; i<=n; i++){
        for(int j=1; j<=7; j++){
            cin >> ming[i][j];
        }
    }

    // 遍历每一张彩票
    for(int i=1; i<=n; i++){
        int cnt = 0; // 当前这张彩票中了几个号码

        // 遍历彩票上的7个号码
        for(int j=1; j<=7; j++){
            // 去和中奖号码比对
            for(int k=0; k<7; k++){
                if(ming[i][j] == price[k]){
                    cnt++; // 匹配成功，计数加1
                    break; // 找到后直接跳出中奖号码的循环，避免重复比较
                }
            }
        }

        // 根据中奖个数判断奖项
        if(cnt == 7) ans[0]++;       // 特等奖
        else if(cnt == 6) ans[1]++;  // 一等奖
        else if(cnt == 5) ans[2]++;  // 二等奖
        else if(cnt == 4) ans[3]++;  // 三等奖
        else if(cnt == 3) ans[4]++;  // 四等奖
        else if(cnt == 2) ans[5]++;  // 五等奖
        else if(cnt == 1) ans[6]++;  // 六等奖
    }

    // 按题目要求输出
    for(int i=0; i<7; i++){
        cout << ans[i] << " ";
    }

    return 0;
}