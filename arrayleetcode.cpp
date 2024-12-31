#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "The array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void altreverse(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i+1]);
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int duplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {

        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int common(int arr[], int brr[], int size)
{
    /* Not optimised
    int ans = 0, key = 0;
    for (int i = 0; i < size; i++)
    {
        int ans = arr[i];
        for (int j = 0; j < size; j++)
        {
            int key = brr[j];
            if (ans == key)
            {
                return ans;
                key = INT16_MIN;
                break;
            }

        }
    }
}
*/
    int i = 0;
    int j = 0;
    while (i < size && j < size)
    {
        if (arr[i] == brr[j])
        {
            return arr[i];
            i++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}
int pairsum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << min(arr[i], arr[j]) << " " << max(arr[i], arr[j]);
            }
        }
    }
}
int sort01(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
}
int main()
{
    // int arr[7] = {1, 2, 1, 2, 3, 3, 16};
    int arr[5] = {1, 1, 1, 2, 3};
    int brr[7] = {10, 12, 13, 14, 15, 15, 16};
    int crr[7] = {0, 1, 0, 1, 0, 1, 1};
    // altreverse(arr, 7);
    // cout<<unique(arr, 7);
    // printarray(arr, 7);
    // cout << duplicate(arr, 7);
    // cout<<common(arr,brr,7);
    // pairsum(arr, 5, 5);
    sort01(crr, 7);
    printarray(crr, 7);
}