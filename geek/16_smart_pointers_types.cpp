/* smart pointers types:
1. auto_ptr
2. unique_ptr
3. shared_ptr
4. weak_ptr
*/
//unique is advanced version of auto

#include<iostream>
using namespace std;
//dynamic memory management library
#include<memory>

class rectangle
{
    int length;
    int breadth;
    
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};

void unique()
{
    // unique ptr
    cout<<"Unique_ptr"<<endl;
    unique_ptr<rectangle> p1(new rectangle(10, 5));
    cout << "Area p1 : " << p1->area() << endl;

    // unique_ptr<rectangle> p2(p1);
    unique_ptr<rectangle> p2;
    p2 = move(p1);

    cout << "Area p2 : " << p2->area() << endl;
}

//shared_ptr
void shared()
{
    cout << "\nShared_ptr" << endl;
    shared_ptr<rectangle> p1(new rectangle(10, 8));
    cout << "Area p1 : " << p1->area() << endl;

    shared_ptr<rectangle> p2;
    p2 = p1;
    cout << "Area p2 : " << p2->area() << endl;

    // this will not give error now
    cout << "Area p1 : " << p1->area() << endl;

    // count od pointers
    cout << "Count : " << p1.use_count() << endl;
}

//weak_ptr
void weak()
{
    cout << "\nWeak_ptr" << endl;
    shared_ptr<rectangle> p1(new rectangle(10, 7));
    cout << "Area p1 : " << p1->area() << endl;

    auto p2 = p1;
    cout << "Area p2 : " << p2->area() << endl;

    // this will not give error now
    cout << "Area p1 : " << p1->area() << endl;

    // count od pointers
    cout << "Count : " << p1.use_count() << endl;
}

int main()
{
    unique();
    shared();
    weak();

    return 0;
}