#include <bits/stdc++.h>
using namespace std;
int rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int addarray(int arr[], int n, int brr[], int m, int crr[])
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int val1 = arr[i];
        int val2 = brr[j];
        int sum = val1 + val2 + carry;
        int carr = sum / 10;
        sum = sum % 10;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        int carr = sum / 10;
        sum = sum % 10;
        i--;
    }
    while (j >= 0)
    {
        int sum = brr[i] + carry;
        int carr = sum / 10;
        sum = sum % 10;
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
    }
    
}
void print(int crr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << crr[i] << i++;
    }
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    // rotate(v, 3);
    // print(v);
    int arr[4] = {1, 2, 3, 4};
    int brr[4] = {1, 2, 3, 4};
    int crr[8];
    addarray(arr, 4, brr, 4, crr);
    print(crr, 8);
}