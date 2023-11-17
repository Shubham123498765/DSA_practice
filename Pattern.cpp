#include <iostream>
using namespace std;
int main()
{
  // int i = 5, j = 5, k = 4;
  // for (i = 1; i <= 5; i++)
  // {
  //     for (j = 1; j <= 5; j++)
  //     {
  //         if (j <= k)
  //             cout << "  ";
  //         else
  //             cout << "* ";
  //     }
  //     cout << endl;
  //     k--;
  // }

  // int i=1,j=1,k=1;
  // for (i = 1; i <= 5; i++)
  // {
  //     for (j = 1; j <= i; j++)
  //     { cout<<k<<" ";
  //     k++; }cout<<endl;
  // }

  // return 0;

  //   int r,i,j;
  // cout<<"Enter no. of rows ";
  // cin>>r;

  // for(i=1;i<=r;i++)
  // {
  //   for(j=1;j<=i;j++)
  //   cout<<"*";
  //   for(j=1;j<=2*(r-i);j++)
  //   cout<<" ";
  //   for(j=1;j<=i;j++)
  //   cout<<"*";
  //   cout<<"\n";
  // }
  //   for(i=r;i>=1;i--)
  // {
  //   for(j=1;j<=i;j++)
  //   cout<<"*";
  //   for(j=1;j<=2*(r-i);j++)
  //   cout<<" ";
  //   for(j=1;j<=i;j++)
  //   cout<<"*";
  //   cout<<"\n";
  // }
  // return 0;
  int i, j, k, l, m;
  int n;
  cin >> n;
  // for (i = 1; i <=n; i++)
  // {
  //   for (j = 1; j <=n -i; j++)
  //   {
  //     cout << " ";
  //   }
  //   for (k = 1; k <= i; k++)
  //   {
  //     cout << k << " ";
  //   }
  //   cout << endl;
  // }
  // return 0;
  for (i = 1; i <= n; i++)
  {

    for (j = 1; j <= n - i; j++)
    {
      cout << "  ";
    }
    for (k = i; k >= 1; k--)
    {
      cout << k<< " ";
    }
    for (l = 2; l <= i; l++)
    {
      cout << l<< " ";
    }

    cout << endl;
  }
}