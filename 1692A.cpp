#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int a;
        for (int i = 0; i < 4; i++)
        {
            int temp;
            cin >> temp;
            if (i == 0)
            {
                a = temp;
            }

            if (temp>a)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
}