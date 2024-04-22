#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n)
    {
        if (n >= 100)
        {
            count += n / 100;
            n = n % 100;
        }
        else if (n < 100 && n >= 20)
        {
            count += n / 20;
            n = n % 20;
        }
        else if (n < 20 && n >= 10)
        {
            count += n / 10;
            n = n % 10;
        }

        else if (n < 10 && n >= 5)
        {
            count += n / 5;
            n = n % 5;
        }
        else if (n < 5 && n >= 1)
        {
            count += n / 1;
            n = n % 1;
        }
    }
    cout<<count<<endl;
}