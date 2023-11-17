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
    int pivot = arr[high];
    int i = low-1 ;
    int j = low;
    int temp;

    do
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
    } while (i < j);

    // Swap A[low] and A[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high); 
        quickSort(arr, low, partitionIndex - 1);  // sort left subarray 
        quickSort(arr, partitionIndex + 1, high); // sort right subarray
    }
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
    quickSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
