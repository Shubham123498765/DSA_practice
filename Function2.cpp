#include <iostream>
using namespace std;
int prime(int k)
{
    int i = 2, f = 1;
    for (i = 2; i <= k / 2; i++)
    {
        if (k % i == 0)
        {
            f = 0;
            break;
        }
    }
    return f;
}
int main()
{
    int i = 1, j = 1, k = 2;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; k++)
        {

            if (prime(k) == 1)
                {cout << k << " "; 
                j++;}
        }

        cout << endl;
    }

    return 0;
}