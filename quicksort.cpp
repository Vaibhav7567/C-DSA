#include <iostream>
using namespace std;
int parition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
        
    }
    return pivotIndex;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = parition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int m = 5;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    quicksort(arr, 0, m-1);
    for (int i = 0; i < m ; i++)
    {
        cout << arr[i] << " ";
    }
}