#include<iostream>
using namespace std;

int main(){
    int count=0;
    for (int i = 1; i <= 5; i++)
    {
       for (int j = 1; j <=5;j++)
       {
        int temp;
        cin>>temp;
        if (temp==1)
        {
           if (i==3 && j==3)
           {
            count=0;
           }
           if (i>=3)
           {
            count+=i-3;
           }
           else if (i<3)
           {
            count+=3-i;
           }

           if (j>=3)
           {
            count+=j-3;
           }
           else if (j<3)
           {
            count+=3-j;
           }


          
           
           
        }
        
       }
       
    }
    cout<<count<<endl;
    
}