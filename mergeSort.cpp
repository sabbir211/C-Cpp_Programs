#include <iostream>
using namespace std;

void printArr(int arr[], int start, int end)
{
    cout << "start=" << start << " end=" << end << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int start, int end, int mid)
{
    cout << mid << endl;
    printArr(arr, start, end);

    int n1 = mid - start + 1;
    int n2 = end - mid;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end, mid);
}

int main()
{

    int arr[] = {5, 6, 2, 3, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    mergeSort(arr, start, end);

    return 0;
}