//Double ended queue

#include<iostream>
using namespace std;
#include<deque>
#include<iterator>
#include<bits/stdc++.h>

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for(it = g.begin(); it!=g.end(); it++)
    {
        cout<<"\t"<<*it;
    }
    cout<<"\n";
}

int main(void)
{
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_back(15);
    cout<<"The deque gquiz is : ";
    showdq(gquiz);

    cout<<endl<<"gquiz.size() : "<<gquiz.size();
    cout<<endl<<"gquiz.max_size() : "<<gquiz.max_size();
    cout<<endl<<"gquiz.at(2) : "<<gquiz.at(2);
    cout<<endl<<"gquiz.front() : "<<gquiz.front();
    cout<<endl<<"gquiz.back() : "<<gquiz.back();

    cout<<endl<<endl<<"Deque is : ";
    showdq(gquiz);
    cout<<"gquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);

    cout<<endl<<"Deque is : ";
    showdq(gquiz);
    cout<<"gquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);

    //insert function
    deque<int>::iterator it=gquiz.begin();
    gquiz.insert(it+1,100);
    cout<<endl<<"gquiz.insert(1,100) : ";
    showdq(gquiz);
    cout<<"gquiz.insert(1,3,200) : ";
    gquiz.insert(it+1,3,200);
    showdq(gquiz);

    deque<int> d2(2,500);
    it=it+3;
    cout<<endl<<"d2 deque : ";
    showdq(d2);
    cout<<"gquiz.insert(it,de.begin(),d2.end()) : ";
    gquiz.insert(it,d2.begin(),d2.end());
    showdq(gquiz);

    cout<<endl<<"Deque is : ";
    showdq(gquiz);
    cout<<"gquiz.front() : "<<gquiz.front();
    cout<<endl<<"gquiz.back() : "<<gquiz.back();

    //assign
    cout<<endl<<endl<<"d2 deque : ";
    showdq(d2);
    d2.assign(5,10);
    cout<<"d2 deque after assign(5,10): ";
    showdq(d2);
    d2.assign(10,20);
    cout<<"d2 deque after assign(10,20): ";
    showdq(d2);
    cout<<endl<<"d2 deque : ";
    showdq(d2);
    cout<<"gquiz deque : ";
    showdq(gquiz);
    d2.assign(gquiz.begin()+4,gquiz.end());
    cout<<"d2 deque after assign(gquiz.begin()+4,gquiz.end()): ";
    showdq(d2);

    // empty function gives true if teh deque is empty

    // The clear() function is used to remove all the elements of the deque container, thus making its size 0.

    // The erase() function is used to remove elements from a container from the specified position or range.

    // deque_name.rbegin() : It returns a reverse iterator which points to the last element of the deque

    // deque_name.rend() : It returns a reverse iterator which points to the position before the beginning of the deque.

    // deque_name.cbegin() : It returns a constant iterator pointing to the first element of the deque. This means, that the iterator can be used to traverse the queue, but not to modify it. 
    //                       That is, functions like insert, erase would throw an error if called using a constant iterator.

    // deque::resize() is an inbuilt function in C++ STL which changes the size of the deque.
    //If the given size is greater than the current size, then new elements are inserted at the end of the deque.
    //If the given size is smaller than the current size, then extra elements are destroyed.

    // deque::operator= 
    //                  This operator is used to assign new contents to the container by replacing the existing contents.
    //                  It also modifies the size according to the new contents.

    // deque::operator[]
    //                   This operator is used to reference the element present at position given inside the operator.
    //                   It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception 
    //                   when the position is not in the bounds of the size of deque, while this operator causes undefined behavior.

    // deque::at()       at() function is used reference the element present at the position given as the parameter to the function.

    // deque::swap()     This function is used to swap the contents of one deque with another deque of same type and size.

    // deque::emplace_front()   This function is used to insert a new element into the deque container, the new element is added to the beginning of the deque.

    // deque::emplace_back()     This function is used to insert a new element into the deque container, the new element is added to the end of the deque.

    

    return 0;
}