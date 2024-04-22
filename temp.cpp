#include <iostream>
using namespace std;

void printArray(int arr[], int start, int end0)
{
    for (int i = 0; i < end0; i++)
    {
        cout << arr[i] << " ";
    }
}
int partition(int arr[], int start, int end)
{

    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
        swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotIndex = partition(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}
int main()
{

    int arr[] = {3, 9, 7, 6, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    quickSort(arr, start, end);
    printArray(arr, start, end);
    return 0;
}