#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int leftsum = 0;
    int totalsum = 0;

    for (int i = 0; i < size; i++)
    {
        totalsum += arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        totalsum -= arr[i];
        if (leftsum == totalsum)
        {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}


int sums(int x)
{
    while (x >= 10)
    {
        int sum = 0;
        while (x > 0)
        {
            int rem = x%10;
            sum = sum + rem;
            x = x / 10;
        }
        x = sum;
    }
    return x;
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    // cout<<"The pivot index is "<<pivot(arr,6);
    cout << sums(38);
}