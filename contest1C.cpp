#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string newtime=" ";
        string stringHour = s.substr(0, 2);
        int hour = stoi(stringHour);

        if (hour >= 1 && hour <= 11)
        {
            cout << s + " AM" << endl;
            
        }
        else if(hour==00){
            newtime = "12" + s.substr(2, 3) + " AM";
            cout << newtime << endl;
        }
        else if (hour == 12)
        {

            cout << s + " PM" << endl;
            
        }

        else
        {
            hour = (hour - 12);

            if (hour <= 9)
            {

                newtime = "0" + to_string(hour) + s.substr(2, 3) + " PM";
                cout << newtime << endl;
            }
            else{
                
            newtime = to_string(hour) + s.substr(2, 3) + " PM";
            cout << newtime << endl;
            }

        }
    }
    return 0;
}