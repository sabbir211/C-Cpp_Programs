#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string result = "";
    for (int i = 0; i < n; i++)
    {

        //     if (s[i] == '-' && s[i - 1] == '-')
        //     {
        //         result = "2" + result;
        //         i--;
        //     }
        //    else if (s[i] == '.' && s[i - 1] == '-')
        //     {
        //         result = "1" + result;
        //         i--;
        //     }
        //     else
        //     {
        //         result = "0" + result;
        //     }
        if (s[i] == '-' && s[i + 1] == '-')
        {
            result = result + "2";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            result = result + "1";
            i++;
        }
        else{
            result+="0";
        }
    }
    cout << result << endl;
}