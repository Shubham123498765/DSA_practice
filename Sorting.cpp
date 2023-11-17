/*  
Test cases      
1 5 2 3 4         -> 1 2 3 4 5            (Positive integers)
-10 -5 -11 -4 -6  -> -11 -10 -6 -4 -5     (Negative integers)
-10 5 1 -4 2      -> -10 -4 1 2 5         (Both positive and negative integers)
2147483647 0 -2147483648  -> -2147483648 0 2147483647  (Both largest and smallest value that 'int' can store, corner case)
*/

#include <iostream>
using namespace std;
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap A[low] and A[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high); 
        quicksort(arr, low, partitionIndex - 1);  // sort left subarray 
        quicksort(arr, partitionIndex + 1, high); // sort right subarray
    }
}
int selectionsort(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    print(arr, n);
    return 0;
}

int bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    print(arr, n);
    return 0;
}

int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    print(arr, n);
    return 0;
}

int main()
{
    int n, num;
    cout<<"Enter length of array and elements of array ";
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter 1 for selection sort 2 for Bubble sort 3 for insertion sort 4 for Quick sort ";
    cin >> num;
    if (num == 1)
        selectionsort(arr, n);
    if (num == 2)
        bubblesort(arr, n);
    if (num == 3)
        insertionsort(arr, n);
    if (num == 4)
       { quicksort(arr,0, n-1);
         print(arr, n); }
    return 0;
}