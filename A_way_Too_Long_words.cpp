#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test)
    {
        string inp;

        getline(cin, inp);
        if (inp.size() <= 10)
        {
            cout << inp << endl;
        }
        else{
            cout<<inp[0]<<inp.size()-2<<inp[inp.size()-1]<<endl;
        }

        test--;
    }
}