#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int id;

    void printInfo(){
        cout<<"Name is ";
        cout<<name<<endl;
        cout<<"ID is "<<id<<endl;

    }
};
int main()
{   student arr[2];
   for(int i=0;i<2;i++){
        cout<<"Enter Name ";
        cin>>arr[i].name;
        cout<<"Enter ID ";
        cin>>arr[i].id;
    }
    for(int i=0;i<2;i++){
        arr[i].printInfo();
    }
    

    return 0;
}