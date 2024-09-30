#include <iostream>
using namespace std;
#include <string>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            temp += tolower(s[i]);
            
        }
        if (temp == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}