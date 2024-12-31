#include <iostream>
using namespace std;
bool binarysearch(int arr[][4], int row, int col, int target)
{

    int s = 0;
    int e = row*col - 1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        int element = arr[mid/col][mid%col];
        if(element == target)
        {
            return 1;
        }
        else if(element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

bool binarysearch2(int arr[][4], int row, int col, int target)
{
    int rowIndex = 0;
    int colIndex = col - 1;
    while(rowIndex < row && colIndex >=0)
    {
        int element = arr[rowIndex][colIndex];
        if(element == target)
        {
            return 1;
        }
        else if(element < target)
        {
            rowIndex++;
        }
        else 
        {
            colIndex-- ;
        }

    }
    return 0;
}
int main()
{
    /*
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};
    if(binarysearch(arr, 3,4,12))
    {
        cout<<"Element present ";
    }
    else{
        cout<<"not present"; 
    }
    */
   int arr[4][4] = {{1,4,5,15}, {2,6,8,10},{3,11,12,13},{15,16,17,18}};
    if(binarysearch2(arr, 4,4,12))
    {
        cout<<"Element present ";
    }
    else{
        cout<<"not present"; 
    }
    return 0;
}