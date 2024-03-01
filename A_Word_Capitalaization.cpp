#include<iostream>
using namespace std;

int main(){
    string x;
    cin>>x;
    if (x[0]<=90)
    {
        cout<<x;
    }
    else{
        int y=x[0]-32;
        char w=y;
        x[0]=w;
        cout<<x;
    }
    
    



    return 0;
}