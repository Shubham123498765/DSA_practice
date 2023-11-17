#include <iostream>
using namespace std;
int characterarray()
{
    cout << "Enter size of character array ";
    int n;
    cin >> n;
    char arr[n + 1] = "Hello this is a character array\n";
    cout << arr;
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    cout << "Palindrome program next ";
    bool a = 1;
    if (a)
    {
        cout << "\nEnter size of character array ";
        int n;
        cin >> n;
        char arr1[n + 1];
        cin >> arr1;
        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr1[n - 1 - i])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "Palindrome";
        else
            cout << "Not palindrome";
    }
    return 0;
}

int main()
{
    cout << "For character array press 1 for finding min and max of array press 2 ";
    int num;
    cin >> num;
    if (num == 1)
        characterarray();
    if (num == 2)
    {
        int maxn = INT_MIN;
        int minn = INT_MAX;
        int n;
        cout << "Enter size of array ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            maxn = max(maxn, arr[i]);
            minn = min(minn, arr[i]);
        }
        cout << maxn << " " << minn;

        return 0;
    }
}
