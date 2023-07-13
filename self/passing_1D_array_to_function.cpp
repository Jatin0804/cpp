//C++ program to display marks of 5 students.

#include<iostream>
using namespace std;

//declare function to display marks
//take a 1D array as parameter
int num;
void display(int m[])
{
    cout<<"\nDisplaying marks :";

    //display array elements.
     for(int i=0;i<num;i++)
        cout<<"\nStudent "<<i+1<<": " <<m[i];

}

int main()
{
    //declare and initialize an array .

    cout<<"Enter no. of elements of Array :";
    cin>>num;
    int marks[num];
        for(int i=0;i<num;i++)
        {
            cout<<"Enter marks of student "<<i+1<<": ";
            cin>>marks[i];
        }
        //call display function
        //pass array as argument.

        display(marks);
        return 0;
}
