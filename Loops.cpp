#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Sum of numbers
    //int a,i,sum=0;
    //cout<<"Enter number"<<endl;
    //cin>>a;
    //for(i=1;i<=a;i++){
    //  sum=sum+i;
    //}
    //cout<<"Sum ="<<sum;

    //Total prime numbers
    int i = 2,a,b, f = 0;
    cin >> a>>b;
    cout << 2 << " ";
    while (a <= b)
    {
        i = 2;f=0;
        while (i < sqrt(a))
        {
            if (a % i == 0)
                f = 1;
            i++;
        }
        if (f == 0)
            cout << a << " ";
        a++;
    }

    return 0;
}