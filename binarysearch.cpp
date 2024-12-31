#include <iostream>
using namespace std; 
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Optimised
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;

    }
    return -1;
    
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int index = binarysearch(arr, 6,6);
    cout<<"The index of element to be searched is "<<index;
}