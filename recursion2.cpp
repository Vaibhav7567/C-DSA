#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    // cout << "The size of array is " << e << endl;
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return issorted(arr + 1, size - 1);
    }
}
int getsum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remaingpart = getsum(arr + 1, size - 1);

    int sum = arr[0] + remaingpart;
    return sum;
}
bool linearsearch(int arr[], int size, int key)
{
    // print(arr, s);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remaingpart = linearsearch(arr + 1, size - 1, key);
        return remaingpart;
    }
}
bool binarysearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);

    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}
int main()
{
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {1, 2, 1, 3, 4};
    bool ans = issorted(arr, 5);
    bool ans1 = issorted(brr, 5);

    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Not sorted";
    }
    if (ans1)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
    cout << getsum(arr, 5);
    */
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;
    // bool ans = linearsearch(arr, 5, key);
    bool ans = binarysearch(arr, 0,5, key);

    if (ans)
    {
        cout << "Present ";
    }
    else
    {
        cout << " Absent ";
    }
}