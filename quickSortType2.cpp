#include <iostream>
using namespace std;
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int count = 0;
    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }

    }
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[end]);
int i=start,j=end;
while (i< pivotIndex && j>pivotIndex)
{
   while (arr[i]<=pivot)
   {
    i++;
   }
   while (arr[j]>=pivot)
   {
    j--;
   }
   if (i< pivotIndex && j>pivotIndex)
   {
   swap(arr[i++],arr[j--]);
   }
   

}

return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}
int main()
{

    int arr[] = {1, 2, 1, 3};

    int n = sizeof(arr) / sizeof(arr[0]);
 quickSort(arr,0,n-1);
 print(arr,n);
    return 0;
}