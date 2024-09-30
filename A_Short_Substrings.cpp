#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        string a="";
        string b;
        cin >> b;
        if (b.length()==2)
        {
           cout<<b<<endl;
        
        }
        else{
            for (int i = 0; i < b.length()-1; i=i+2)
            {
                a+=b[i];
            }
            cout<<a+b[b.length()-1]<<endl;
            
        }
        
    }
}