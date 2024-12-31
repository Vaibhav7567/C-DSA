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

int max(int arr[], int size)
{
    int max = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int size)
{
    int min = INT16_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int addsum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
}
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at " << i;
            return 1;
        }
    }
    return 0;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }
}

int main()
{
    /*
    int val = 1;
    int arr[6];

    for(int i = 0; i<=6; i++)
    {
        arr[i]=val;
    }
    for(int i = 0; i<=6; i++)
    {
        cout<<arr[i]<<"\t";
    }
*/

    // int size = 10;

    /* char ch[10]= {'a', 'b','c'};
     for(int i=0;i<10;i++)
     {
         cout<<ch[i]<<" ";
     }*/

    /*
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "The max element is " << max(num, size) << endl;
    cout << "The min element is " << min(num, size) << endl;
     cout<<"The sum of all the elements of the array is "<<addsum(num, size);

    */

    /*
     int arr[10] = {1, 2, 3, 4, 5, 6, 6, 1001, 12, 21};
     int key;
     cout << "Enter the element you want to find ";
     cin >> key;
     search(arr, 10, key);
     // if (found)
     // {
     //     cout<<"Element found ";
     // }
     // else
     // {
     //     cout<<"Element not found";
     // }
     */
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {2, 3, 43, 23, 1};
    reverse(arr, 6);
    reverse(brr, 5);
    printarray(arr, 6);
    printarray(brr, 5);
}