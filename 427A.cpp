#include<iostream>
using namespace std;

int main(){
    int count=0;
    int have=0;
    int n;
    cin>>n;

    for (int i = 0; i <n; i++)
    {
        int temp;
        cin>>temp;
        if (temp==-1)
        {
            if (have>0)
            {
               have--;
            }
            else{
                count++;
            }
            
        }
        else{
            have+=temp;
        }
        
      
    }
    cout<<count<<endl;
    
}