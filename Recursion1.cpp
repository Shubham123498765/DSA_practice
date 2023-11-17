#include<iostream>
using namespace std;
void hello(int n){
    if(n==0)
    return;

    cout<<"hello "<<n<<"\n";
    
    hello(n-1);// When return statement hits at n=1 then the control passes to this line 9 and the statements below this line 
               // gets executed.After execution of below lines memory in stack that holds n=1 is cleared and the control again
               // passes to this line 9 with the next memory in stack that hold n=2 and this process continues till n=5
               // and after that control passes to main function.
    
    cout<<"hello "<<n<<"\n";
}

int main()
{
    hello(5);
    return 0;
}
