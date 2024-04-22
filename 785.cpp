#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;

        if ("Tetrahedron"==s)
        {
           sum+=4;
        }
        if ("Cube"==s)
        {
           sum+=6;
        }
        if ("Octahedron"==s)
        {
           sum+=8;
        }
        if ("Dodecahedron"==s)
        {
           sum+=12;
        }
        if ("Icosahedron"==s)
        {
           sum+=20;
        }
        
    }
    cout<<sum
;    
}