// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
int numA;

friend class ClassB;

public:
 ClassA() : numA(12) {}
};

class ClassB
{
int numB;

public:
 ClassB() : numB(1) {}

int add()
{
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main(void)
{
    ClassB objectB;
    cout << "Sum: " << objectB.add();
}
