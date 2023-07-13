//Program to illustrate the working of objects and class

#include<iostream>
using namespace std;

class room
{
public:
    double length, breadth, height;

    double calArea()
    {
        return length*breadth;
    }
    double valVolume()
    {
        return length*breadth*height;
    }
};

int main()
{
    room room1;  //Create object of class.

    cout<<"Enter length : ";
    cin>>room1.length;
    cout<<"Enter Breadth : ";
    cin>>room1.breadth;
    cout<<"Enter Height : ";
    cin>>room1.height;

    cout<<"Area of room is : "<<room1.calArea()<<endl;
    cout<<"Volume of room is : "<<room1.valVolume();

    return 0;
}
