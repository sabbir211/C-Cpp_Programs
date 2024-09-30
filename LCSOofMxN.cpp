#include <iostream>
using namespace std;
#include <vector>

int LCS(string s1, string s2, int i, int j)
{
    int m = s1.length();
    int n = s2.length();
    if (i == m || j == n)
    {
        return 0;
    }
    int taken = 0;
    int skip = 0;
    if (s1[i] == s2[j])
    {
        
        taken = 1 + LCS(s1, s2, i + 1, j + 1);
    }
    else
    {
        int left = LCS(s1, s2, i, j + 1);
        int right = LCS(s1, s2, i + 1, j);
        return max(left, right);
    }
    return taken;
}
int main()
{
    string s1 = "bubble";
    string s2 = "double";
    int m = s1.length();
    int n = s2.length();
    int r = LCS(s1, s2, 0, 0);
    cout << r << endl;
}