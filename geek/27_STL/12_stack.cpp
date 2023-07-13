/*
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)
*/

#include<iostream>
using namespace std;
#include<stack>


void showstac(stack<int> st)
{
    stack<int> stac=st;
    while(!stac.empty())
    {
        cout<<" "<<stac.top();
        stac.pop();
    }
}
int main(void)
{
    stack<int> stac;
    stac.push(10);
    stac.push(11);
    stac.push(12);
    stac.push(13);
    stac.push(14);
    stac.push(15);
    int num;
    cout<<"Enter the top element of stack : ";
    cin>>num;
    stac.push(num);

    cout<<"The stack is : ";
    showstac(stac);

    stac.pop();
    stac.pop();

    cout << endl << "After popping 2 elements.\nThe stack is : ";
    showstac(stac);

    return 0;
}