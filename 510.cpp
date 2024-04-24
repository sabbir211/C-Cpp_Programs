#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
bool flip=false;
    for (int  i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= m; j++)
        {
           if (i%2!=0)
           {
            cout<<"#";
           }
           else{
            if (flip)
            {
                if (j==m)
                {
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            else
            {
                if (j==1)
                {
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            
            
           }
           
        }
        if (i%2!=0)
        {
            flip=(!flip);
        }
        
        cout<<endl;
        
    }
    
}