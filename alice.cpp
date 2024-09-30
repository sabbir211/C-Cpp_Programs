#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int alice=x*2;
    int bob=x*x;
    if (alice==bob)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
    return 0;
}