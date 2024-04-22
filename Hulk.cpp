#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    string hate = "I hate ";
    string love = "that I love ";
    string result = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i > 1)
            {
                result += "that " + hate;
            }
            else
            {
                result += hate;
            }
        }
        else
        {
            result += love;
        }
    }
    cout << result + "it" << endl;
}