#include <iostream>
#include <string>
#include <vector>
using namespace std;
int getNum(string word) {
    // 正规数字 0~20
    if (word == "zero")       return 0;
    if (word == "one")        return 1;
    if (word == "two")        return 2;
    if (word == "three")      return 3;
    if (word == "four")       return 4;
    if (word == "five")       return 5;
    if (word == "six")        return 6;
    if (word == "seven")      return 7;
    if (word == "eight")      return 8;
    if (word == "nine")       return 9;
    if (word == "ten")        return 10;
    if (word == "eleven")     return 11;
    if (word == "twelve")     return 12;
    if (word == "thirteen")   return 13;
    if (word == "fourteen")   return 14;
    if (word == "fifteen")    return 15;
    if (word == "sixteen")    return 16;
    if (word == "seventeen")  return 17;
    if (word == "eighteen")   return 18;
    if (word == "nineteen")   return 19;
    if (word == "twenty")     return 20;

    // 非正规数字
    if (word == "a")          return 1;
    if (word == "another")    return 1;
    if (word == "both")       return 2;
    if (word == "first")      return 1;
    if (word == "second")     return 2;
    if (word == "third")      return 3;

    return -1;  // 不是数字单词
}
int main(){ 
    string s;
    getline(cin,s);

    size_t first_space;

    size_t start =0;

    vector <string> nums;   //用来存空格当前位置

    while (1){
        first_space = s.find(" ",start);

        string word;
        if(first_space != string::npos){

            word = s.substr(start,
                first_space - start);


        }
        else {
            word = s.substr(start);
            
        }
        int num = getNum(word);
        if(num != -1){
            int squ = (num * num)%100;
            string t = to_string(squ);
            if(t.size() == 1) t = "0"+t;

            nums.push_back(t);

            }

        if(first_space == string::npos) break;
        start = first_space +1;        
    }
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size() - 1 - i; j++) {    // 冒泡排序
            if (nums[j] > nums[j + 1]) {
                string tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

    string ans = "";                                      // 拼接答案
    for (int i = 0; i < nums.size(); i++) {
        ans += nums[i];
    }

    if(ans.size()>0){
        int i = 0;                                            // 去前导零（手动去）
        while (i < ans.size() - 1 && ans[i] == '0') i++;
        ans = ans.substr(i);

    }

    if (ans.size()==0) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}