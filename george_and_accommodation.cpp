#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int capacity;
    int booked;

   int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>booked;
        cin>>capacity;
        if (capacity-booked>=2)
        {
          count++;
         
        }

        
    }
    
cout<<count;
    
    return 0;
}