#include<iostream>
using namespace std;

class Animal // Base class
{
private:
    string color;

protected:
    string Type;

public:
    void eat()
    {
        cout<<"I can eat."<<endl;
    }
    void sleep()
    {
    cout<<"I can sleep!"<<endl;
    }
    void setcolor(string clr)
    {
        color=clr;
    }
    string getcolor()
    {
        return color;
    }
};

class dog: public Animal //Derived class
{
public:
    void bark()
    {
        cout<<"I can bark ." <<endl;
    }
    void setType(string tp)
    {
        Type=tp;
    }
    void displayinfo(string c)
    {
        cout<<"I am a "<<Type<<endl;
        cout<<"My color is "<<c<<endl;
    }
};

main()
{
    dog dog1;

    //Base class.
    dog1.sleep();
    dog1.eat();
    dog1.setcolor("Black");

    //Derived class.
    dog1.bark();
    dog1.setType("Mammal");

    dog1.displayinfo(dog1.getcolor());
}
