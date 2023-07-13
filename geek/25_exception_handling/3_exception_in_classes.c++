#include<iostream>
#include<exception>
using namespace std;

class BaseException: public exception
{
    public:
    virtual const char* what() const throw()
    {
        return "Base exception"; 
    }
};

class DerivedException: public BaseException
{
    public:
    virtual const char* what() const throw()
    {
        return "Derived Exception";
    }
};

int main()
{
    try
    {
        //code that might throw exception
        throw DerivedException();
    } catch(BaseException& e)
    {
        cout << "caught Exception : " << e.what() << '\n';
    }
    return 0;    
}