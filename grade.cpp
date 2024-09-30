#include <iostream>
using namespace std;

int main()
{
    float grade;
    float credit;

    float x = 0;
    float total = 0;
    cout<<"GRade"<<" credit:";
    for (int i = 0; i < 10; i++)
    {
        cin >> grade >> credit;
        x += grade * credit;
        total += credit;
    }
    float result=x/total;
    cout<<total<<endl;
}