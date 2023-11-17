#include<iostream>
using namespace std;
int fact(int a){
    int i=1,j=1;
    for(i=1;i<=a;i++)
    {
        j=j*i;
    }
    return j;
}

int main()
{
    int n;
    cin>>n;
    int j=fact(n);
    cout<<fact(n)<<endl;
    cout<<j;

    return 0;
}