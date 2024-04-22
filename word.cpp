#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int upperCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i];
        if (x >= 65 && x <= 90)
        {
            upperCount++;
        }
    }
    int lowerCount=s.size() - upperCount;
    if (lowerCount >= upperCount)
    {
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i];
            if (x >= 65 && x <= 90)
            {
                s[i] = x + 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i];
            if (x >= 97)
            {
                s[i] = x - 32;
            }
        }
    }
    

    cout << s<<endl;
}