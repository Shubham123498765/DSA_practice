#include <iostream>
using namespace std;

int fib(int n)
{
    // 0,1,1,2,3,5,8,13,21
    // 1,2,3,4,5,6,7,8 ,9
    // nth=(n-1)th+(n-2)th
    if (n == 1)
    {
        return 0; // first term
    }
    if (n == 2)
    {
        return 1; // Second term
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(5);
    return 0;
}