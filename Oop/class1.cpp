#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    int marks;

    void topmarks(){
        cout<<name<<" has got the highest marks"<<endl;
    }
    void highlow(){
        cout<<marks<<" is the highest marks and "<<marks<<" is the lowest marks"<<endl;
    }
    void display(){
        cout<<"Name is ";
        cout<<name<<endl;
        cout<<"Roll is "<<roll<<endl;
        cout<<"Marks is "<<marks<<endl;
        }
};

int main()
{  student arr[2];
   for(int i=0;i<2;i++){
         cout<<"Enter Name ";
         cin>>arr[i].name;
         cout<<"Enter Roll ";
         cin>>arr[i].roll;
         cout<< "Enter marks ";
         cin>>arr[i].marks;
    }
    if(arr[0].marks>arr[1].marks)
    arr[0].topmarks();
    else
    arr[1].topmarks(); 
    if(arr[0].marks>arr[1].marks)
    arr[0].highlow();
    else
    arr[1].highlow();    
    for(int i=0;i<2;i++){
        arr[i].display();
    }
    return 0;
}