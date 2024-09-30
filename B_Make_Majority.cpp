#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        vector<int> extracted;
        int n;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                extracted.push_back(1);
            }
            else
            {
                extracted.push_back(0);
                while (s[i] == '0' && i < s.length())
                {
                    i++;
                }
                if (s[i]=='1')
                {
                    extracted.push_back(1);
                }
                
            }
        }
        int one = 0;
        int zero = 0;
        for (auto &&i : extracted)
        {
            if (i == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (zero >= one)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}