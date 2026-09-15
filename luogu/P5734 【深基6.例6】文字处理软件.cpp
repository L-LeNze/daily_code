#include <iostream>
#include <string>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string s_first;
    cin >> s_first;

    for (int i = 1; i <= q; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            string s1;
            cin >> s1;
            s_first = s_first + s1;
            cout << s_first << endl;
        }
        else if (a == 2)
        {
            int left, num;
            cin >> left >> num;
            s_first = s_first.substr(left, num);
            cout << s_first << endl;
        }
        else if (a == 3)
        {
            int s_insert;
            string s3;
            cin >> s_insert >> s3;
            s_first.insert(s_insert, s3);
            cout << s_first << endl;
        }
        else if (a == 4)
        {
            string s4;
            cin >> s4;
            int pos = s_first.find(s4);
            if (pos == string::npos)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << pos << endl;
            }
        }
    }

    return 0;
}