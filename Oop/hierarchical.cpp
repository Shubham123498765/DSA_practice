#include <iostream>
using namespace std;
class country
{
public:
   country()
   {
      cout << "India\n";
   }
};

class state : public country
{
 public:
   
   state()
   {
      cout << "Himachal Pradesh\n";
   }
   
};

class city : public state
{
    public:
    city()
    {
        cout<<"Kullu\n";
    }
};

class village : public city{
    public:
    village(){
        cout<<"Malana";
    }
};
int main()
{
  village a;
   return 0;
}