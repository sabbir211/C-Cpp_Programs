#include <iostream>
using namespace std;
int main()
{

    long long int x;
    cin >> x;
    bool lucky = true;
    int count=0;
    if (x < 0)
    {
        cout << "NO";
    }
    else
    {
        while (x)
        { 
            if (x % 10 != 4 && x % 10 != 7)
            {
                lucky = false;
                break;
            }

            count++;
            x /= 10;
        }

        if(lucky){
            if(count ==4 || count ==7){
                cout<<"YES";
            }
            else{
                cout<<"NO";            }
        }
        else{
        cout<<"NO";

        }
    }

    return 0;
}
