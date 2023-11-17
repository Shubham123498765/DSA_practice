#include<iostream>
using namespace std;
int main()
{
    int num,reversenum=0,lastdigit; 
    cin>>num;
    while(num>0){
        lastdigit=num%10;
        reversenum=reversenum*10+lastdigit;
        num=num/10;
    }cout<<reversenum;

    return 0;
}