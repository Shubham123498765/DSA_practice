#include<iostream>
using namespace std;
int main()
{
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
    cout<<"Apple";
        break;
        case 'b':
        cout<<"Banana";
    
    default:
    cout<<"Fruits";
        break;
    } 

    return 0;
}