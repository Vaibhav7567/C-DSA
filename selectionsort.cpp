#include <iostream>
#include <math.h>
using namespace std;
int selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }

}
int main()
{
    int arr[6] = {1, 45, 32, 12, 2, 0};
    
    
    cout << "Now the sorted array is " <<selectionsort(arr, 6)<< endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}