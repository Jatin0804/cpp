#include<iostream>
using namespace std;
#include<cstring>

class String
{
    private:
    char *s;
    int size;

    public:
    String(const char* str = NULL);  //constructor
    ~String() { delete[] s;}  //destructor
    String(const String&);   //copy constructor
    void print()  //print
    {
        cout<<s<<endl;
    }
    void change(const char* );  //change string
};

String::String(const char* str)
{
    size=strlen(str);
    s=new char[size+1];
    strcpy(s,str);
}

void String::change(const char* str)
{
    delete[] s;
    size=strlen(str);
    s=new char[size+1];
    strcpy(s,str);
}

String::String(const String& old_str)
{
    size=old_str.size;
    s=new char[size+1];
    strcpy(s,old_str.s);
}

int main(void)
{
    String str1("Hey HOwz U");
    String str2=str1;

    str1.print();
    str2.print();

    str2.change("I am fine");

    str1.print();
    str2.print();
}