#include<iostream>
using namespace std;

class vehicle
{
public:
  vehicle()
  {
    cout<<"This is a vehicle."<<endl;
  }
};

class fourwheeler
{
public:
  fourwheeler()
  {
    cout<<"This is a 4 wheeler vehicle."<<endl;
  }
};

class car:public vehicle,public fourwheeler
{

};

int main()
{
  car obj1;
  return 0;
}
