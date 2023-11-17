#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    int n,sum=0,a=0,b;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    b=((n)*(n+1))/2;
    int su[b];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=(j);k++){
                sum=sum+arr[k];
            }
            su[a]=sum;
            a=a+1;
            
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<b;i++){
        mx=max(mx,su[i]);
    }
    int indx;
    for(int i=0;i<b;i++){
        if(mx==su[i]){
            indx=i;
            break;
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(c==indx){
                for(int k=i;k<=(j);k++){
                cout<<arr[k]<<" ";
            }
            }
            
            c=c+1;
            
        }
    }



    return 0;
}