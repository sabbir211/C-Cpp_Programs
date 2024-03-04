#include<iostream>
using namespace std;
int main(){

    int x;
    cin>>x;
    int count=0;
    while (x)
    {
        if (x>=5)
        {
            int y=x/5;
            count+=y;
            x=x%5;
        }
        
         if (x>=4)
        {
            int y=x/4;
            count+=y;
            x=x%4;
        }
         if (x>=3)
        {
            int y=x/3;
            count+=y;
            x=x%3;
        }
         if (x>=2)
        {
            int y=x/2;
            count+=y;
            x=x%2;
        }
         if (x>=1)
        {
            int y=x/1;
            count+=y;
            x=x%1;
        }
        
        
    }
cout<<count;
    
    return 0;
}