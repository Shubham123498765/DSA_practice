#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,m;
    cin>>a>>b>>c>>d;
    // m=( a > b ) ? ( a > c ? a : c) : ( b > c ? b : c);
    // cout<<m;
    m=(a>b)?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
    cout<<m;
    // if ((a>b)&&(a>c))
    // cout<<a;
    // else if ((b>c)&&(b>a))
    // cout<<b;
    // else
    // cout<<c;

    // if (a>b){
    //     if (a>c)
    //     cout<<a;
    //     else 
    //     cout<<c;

    // }
    // else if (b>c)
    // cout<<b;
    // else 
    // cout<<c;



    return 0;
}