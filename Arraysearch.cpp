#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int binarysearch(int arr[], int n, int key)
{
    int s = 0, e, mid;
    e = n;
    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to find it's index ";
    cin >> key;
    cout << "Enter 1 for linear search 2 for binay search ";
    int num;
    cin >> num;
    if (num == 1)
        cout << linearsearch(arr, n, key);
    if (num == 2)
        cout << binarysearch(arr, n, key);
    return 0;
}