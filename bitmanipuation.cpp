#include <iostream>
using namespace std;
int swap()
{
    int a, b;
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << b;
    return 0;
}
int find()
{
    int n, i;
    cout << "Enter number and position ";
    cin >> n >> i;
    int mask = 1 << i;
    if ((mask & n) == 0)
        cout << "Bit is 0";
    else
        cout << "Bit is 1";
    return 0;
}
int set()
{
    int n, i;
    cout << "Enter number and position ";
    cin >> n >> i;
    int mask = 1 << i;
    int newnumber = mask | n;
    cout << "New number is " << newnumber;
    return 0;
}
int clear()
{
    int n, i;
    cout << "Enter number and position ";
    cin >> n >> i;
    int mask = ~(1 << i);
    int newnumber = mask & n;
    cout << "New number is " << newnumber;
    return 0;
}
int change()
{
    int n1, n2;
    cout << "Enter two numbers ";
    cin >> n1 >> n2;
    int count = 0;
    int n=n1^n2;
    while (n != 0)
    {
        count++;
        n = (n & (n - 1));
    }
    cout << count;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        swap();
        break;
    case 2:
        find();
        break;
    case 3:
        set();
        break;
    case 4:
        clear();
        break;
    case 5:
        change();
        break;
    default:
        break;
    }

    return 0;
}