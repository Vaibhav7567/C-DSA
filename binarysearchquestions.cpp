#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // Optimised
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // Optimised
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int getpivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int rotatedbs(int arr[], int size, int target)
{

    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[left] <= arr[mid])
        {
            // Left half is sorted
            if (arr[left] <= target && target <= arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            // Right half is sorted
            if (arr[mid] <= target && target <= arr[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}
int sqr(int key)
{
    int s = 0;
    int e = key;
    int ans = -1;
    
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int square = mid * mid;
        if (square == key)
        {
            return square;
        }
        else if (square < key)
        {
            
            s = mid + 1;
            ans = square;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[14] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4};
    int brr[7] = {1, 2, 2, 3, 4, 5, 6};
    int crr[6] = {3, 4, 5, 6, 2, 1};
    int drr[5] = {8, 10, 17, 1, 3};
    int err[7] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = rotatedbs(err, 7, target);

    cout<< "first occ of 3 is "<<firstocc(arr,14,3)<< " and the last occ is "<<lastocc(arr,14,3)<<endl;
    // cout<< "first occ of 2 is "<<firstocc(brr,7,2)<< " and the last occ is "<<lastocc(brr,7,2);
    // cout<<"The peak element is present at "<<peak(crr,6);
    // cout << "The pivot element is present at " << getpivot(drr, 5);
    // cout << "Index of " << target << " is: " << result << endl; 
    // cout << sqr(9);
}