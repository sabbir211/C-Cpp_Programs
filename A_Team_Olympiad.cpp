#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>programming,math,pe;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if (temp==1)
        {
            programming.push_back(i+1);

        }
        else if (temp==2)
        {
            math.push_back(i+1);
        }
        else
        {
            pe.push_back(i+1);
        }
        
    }
    int totalTeam=min(programming.size(),min(math.size(),pe.size()));
    cout<<totalTeam<<endl;
    for (int i = 0; i < totalTeam; i++)
    {
        cout<<programming[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    }
    
    

}