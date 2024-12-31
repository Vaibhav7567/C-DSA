#include<iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    int count[10] = {0};
    int b[n+1];
    // count elements
    for(int i = 0 ; i < n ; i++)
    {
        count[arr[i]]++;
    }
    // left sum of count array
    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i-1];
    }
    // new index
    for(int i = 0 ; i < n ; i++)
    {
        b[count[arr[i]]] = arr[i];
        count[arr[i]]--;
    }

    // copy from b to arr
    for(int i = 0; i < n; i++)
    {
        arr[i] = b[i + 1];
    }

}
int main()
{
    int arr[10] = {3,2,1,2,3,4,1,2,1,10};
    int n = 10;
    countingSort(arr, n);
    for(int i : arr)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    return 0;
}