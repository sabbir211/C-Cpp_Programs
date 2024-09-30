#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "codeforces";
        char a;
        cin >> a;
        bool exist = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == a)
            {
                exist = true;
                break;
            }
        }
        if (exist)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}