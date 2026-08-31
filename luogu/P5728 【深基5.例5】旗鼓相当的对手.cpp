#include <iostream>
#include <cmath> // 必须包含这个，才可以用 abs() 求绝对值
using namespace std;

int chinese[1007], math[1007], english[1007];
int sum[1007];

int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> chinese[i] >> math[i] >> english[i];
        sum[i] = chinese[i] + math[i] + english[i];
    }

    int ans = 0;

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            // 必须使用 abs() 求绝对值！
            if( abs(chinese[i] - chinese[j]) <= 5 && 
                abs(math[i] - math[j]) <= 5 &&
                abs(english[i] - english[j]) <= 5 && 
                abs(sum[i] - sum[j]) <= 10 ){
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}