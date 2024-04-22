#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int num;
    bool easy=true;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        if (num==1)
        {
           easy=false;
           break;
        }

        
    }
    
  easy?cout<<"EASY":cout<<"HARD";
    
    return 0;
}