#include <iostream>
using namespace std;

int main()
{

    int n;
    string won;
    cin >> n;
    cin >> won;
    int anton = 0;
    int danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (won[i] == 'A')
        {
            anton++;
        }
        if (won[i] == 'D')
        {
            danik++;
        }
    }
    if (anton>danik){
        cout<<"Anton";
    }
    else if(anton<danik)
    {
        cout<<"Danik";
    }
    else if(anton==danik )
    
    {
       cout<<"Friendship"; /* code */
    }
    

    return 0;
}