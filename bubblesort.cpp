#include <iostream>
using namespace std;
int bubblesort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            // already sorted
            break;
        }
    }
}
int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    cout << "The sorted array is ";
    bubblesort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}