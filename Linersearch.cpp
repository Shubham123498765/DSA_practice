/* Test case
Enter length of array and element of array 5
1 2 3 4 5
Enter element to find it's index 2
1
*/
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
int main()
{
    int n, i;
    cout<<"Enter length of array and element of array ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to find it's index ";
    cin >> key;
    cout << linearsearch(arr, n, key);
    return 0;
}