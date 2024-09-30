#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    for (int i = 1; i < 10; i++)
    {
        int temp=i*x;
        int rest=temp%10;
        if (rest==0|| rest==y)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    
}