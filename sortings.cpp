#include<iostream>
#include<vector>
using namespace std;
void bubble(vector<int> &arr)
{
    int size = arr.size();
    for(int i = 0; i < size - 1; i ++)
    {
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
                
        }
        if(!swapped)
            break;
    }
}
void selection(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertion(vector<int> &arr)
{
    int n = arr.size();
    for(int i = 1; i <= n ; i++)
    {
        int j;
        int temp = arr[i];
        for(j = i - 1; j >=0; j--)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            
            else    
                break;
        }
        arr[j+1] = temp;
        
    }
}

void merge(int arr[], int s, int e)
{
    int mid = s + (e-s)/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = s;

    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    mainIndex = s;
    int index1 = 0, index2 = 0;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        
        else 
            arr[mainIndex++] = second[index2++];
    }

    while(index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while(index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    int mid = s + (e-s)/2;
    if(s >= e)
        return;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);

}
int parition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
            cnt++;
    }

    int pivotIndex = cnt + s;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    } 
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if(s >= e)
        return;

    int p = parition(arr, s , e);
    quickSort(arr, s, p -1);
    quickSort(arr, p + 1, e);

}
void print(vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> arr= {3,213,2,12,1};
    // bubble(arr);
    // selection(arr);
    // insertion(arr);

    int arrr[] = {3,213,2,12,1};
    // mergeSort(arrr, 0, 4);
    quickSort(arrr, 0, 4);
    printArray(arrr, 5);
}