#include <iostream>
using namespace std;
int getsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
}
int main()
{
    // Bad practice
    /*
    int n ;
    cin >> n;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    /*
     int n;
     cin >> n;
     int *arr = new int[n];

     for(int i = 0 ; i < n ; i++)
     {
         cin >> arr[i] ;
     }

     cout<< "Sum is " << getsum(arr, n) << endl;
     */
    int row;
    cin >> row;

    int col;
    cin >> col;
    // Creating a array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing the memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}