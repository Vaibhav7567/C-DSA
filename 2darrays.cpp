#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)

    {
        for (int j = 0; j < col; j++)
        {
            if (target == arr[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int rowsum(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}
int largestrowsum(int arr[][3], int row, int col)
{
    int maxi = 0;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "max sum = " << maxi << endl;
    return rowIndex;
}
void wave(int arr[][3], int rows, int cols)
{

    for (int col = 0; col < cols; col++)
    {
        if (col == 0 || col % 2 == 0)
        {
            for (int row = 0; row < rows; row++)
            {
                cout << arr[col][row] << " ";
            }
            cout << endl;
        }
        else if (col == 1 || col % 2 != 0)
        {
            for (int row = rows - 1; row >= 0; row--)
            {
                cout << arr[col][row] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    /*
    int arr[3][4];
    for(int row= 0; row < 3 ; row++)
    {
        for(int col  = 0 ; col < 4 ; col++)
        {
            cin>>arr[row][col];
        }
    }
    */
    /*
     for (int row = 0; row < 3; row++)
     {
         for (int col = 0; col < 4; col++)
         {
             cout << arr[row][col] << "\t";
         }
         cout << endl;
     }
     */
    /*
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int target;
    cin >> target;
    if (ispresent(arr, target, 3, 4))

    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    */
    int arr[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    // rowsum(arr, 3, 3);
    /*
    int ans = largestrowsum(arr, 3, 3);
    cout << ans;
    */
    wave(arr, 3, 3);
}