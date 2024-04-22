#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int countForI = 0;
        int countForJ = 0;
        for (int i = 1; i <= n; i++)
        {
            int repeat = 2;
            while (repeat--)
            {
                for (int j = 1; j <= n; j++)
                {
                    int repeatj = 2;
                    while (repeatj--)
                    {
                        if (i % 2 == 0)
                        {
                            if (j % 2 != 0)
                            {
                                cout << "."
                                     ;
                            }
                            else if (j % 2 == 0)
                            {
                                cout << "#"
                                    ;
                            }
                        }
                        else{
                            if (j % 2 != 0)
                            {
                                cout << "#"
                                     ;
                            }
                            else if (j % 2 == 0)
                            {
                                cout << "."
                                     ;
                            }
                        }
                    }
                }
                cout << endl;
            }
        }
    }
}