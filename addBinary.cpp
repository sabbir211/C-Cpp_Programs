#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string sum = "";
    int len1 = s1.length() - 1;
    int len2 = s2.length() - 1;
    int carry = 0;
    int i = max(len1, len2);
    while (len1 >= 0 || len2 >= 0)
    {
        int x = 0, y = 0;
        if (len1 >= 0 && s1[len1] == '1')
        {
            x = 1;
        }
        if (len2 >= 0 && s2[len2] == '1')
        {
            y = 1;
        }

        sum = to_string((x + y + carry) % 2) + sum;
        carry = (x + y + carry) / 2;
        len1--;
        len2--;
    }
    if (carry>=1)
    {
        sum=to_string(carry)+sum;
        
    }
    
    cout<<sum;
    

    
}