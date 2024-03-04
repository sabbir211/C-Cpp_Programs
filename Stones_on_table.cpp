#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;
    int R=0;
    int G=0;
    int B=0;
    int result=0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i]=='R')
        {
            G=0;
            B=0;
            if (x[i+1]=='R')
            {
                R++;
                i++;
            }
            
        }
        if (x[i]=='R')
        {
            G=0;
            B=0;
            if (x[i+1]==R)
            {
                R++;
                i++;
            }
            
        }
        if (x[i]=='R')
        {
            G=0;
            B=0;
            if (x[i+1]==R)
            {
                R++;
                i++;
            }
            
        }
        
    
    
    }

    return 0;
}
