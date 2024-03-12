#include<iostream>
using namespace std;

int knap_sack(int indx,int w_left,int arrSize,int price[],int weight[]){
if(indx==arrSize){
    return 0; 
}

int taken=0;
if (weight[indx]<=w_left)
{
   taken=price[indx]+knap_sack(indx+1,w_left-weight[indx],arrSize,price,weight);

}
int skip=knap_sack(indx+1,w_left,arrSize,price,weight);
 return max(taken,skip);


}



int main(){

    int weight[]={1,2,1,3};
    int price[]={5,4,4,9};
    int n=sizeof(weight)/sizeof(weight[0]);
    int w;
    cin>>w;
   int x= knap_sack(0,w,n,price,weight);
cout<<x;

    return 0;
}