#include <iostream>
using namespace std;
int insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j;
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] =temp;
    }
}
int main()
{
    int arr[5] = {5, 4, 1, 2, 0};
    insertionsort(arr, 5);
    cout << "The sorted array is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}