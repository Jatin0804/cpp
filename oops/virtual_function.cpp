#include<iostream>
#include<string>
using namespace std;

class animal
{
    string type;

public:
    animal():type("Animal") {}

    virtual string gettype()
    {
        return type;
    }
};

class dog:public animal
{
    string type;

public:
    dog():type("Dog") {}

    string gettype() override
    {
        return type;
    }
};

class cat:public animal
{
    string type;

public:
    cat():type("Cat") {}

    string gettype() override
    {
        return type;
    }
};

void print(animal* ani)
{
    cout<<"Animal is "<<ani->gettype()<<endl;
}

int main(void)
{
    animal* animal1=new animal();
    animal* dog1=new dog();
    animal* cat1=new cat();

    print(animal1);
    print(dog1);
    print(cat1);
}
