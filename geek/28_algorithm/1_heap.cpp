/*

The heap data structure can be implemented in a range using STL which provides faster max or min item retrieval, and faster insertion and deletion on sorted data 
and also works as a sub-routine for heapsort.

STL Functions for Heap Operations
make_heap(): Converts given range to a heap.
push_heap(): Arrange the heap after insertion at the end.
pop_heap(): Moves the max element at the end for deletion.
sort_heap(): Sort the elements of the max_heap to ascending order.
is_heap(): Checks if the given range is max_heap.
is_heap_until(): Returns the largest sub-range that is max_heap.
All of the above functions are defined inside the <algorithm> header file.

*/

#include<algorithm>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void print(vector<int> &vc)
{
    for (auto i : vc)
    {
        cout << i << " ";
    }
    cout << endl;
}

struct greaters
{
    bool operator()(const long &a, const long &b) const
    {
        return a > b;
    }
};

int main(void)
{
    vector<int> vect={10,111,20,15,36,90,20,230,540,991};

    make_heap(vect.begin(),vect.end());
    cout<<"vector vect is : ";
    print(vect);
    cout<<"The maximum element of heap is : ";
    cout<<vect.front()<<endl;
    make_heap(vect.begin(),vect.end(),greaters());
    cout<<"The minimum element of heap is : ";
    cout<<vect.front()<<endl<<endl;

    vector<int> vc{20, 30, 40, 10, 60, 85, 20, 15, 50};

    make_heap(vc.begin(), vc.end());
    cout << "Initial Heap vc : ";
    print(vc);

    vc.push_back(90);
    cout << "Heap vc just after push_back(90): ";
    print(vc);
    push_heap(vc.begin(), vc.end());
    cout << "Heap vc after push_heap(90): ";
    print(vc);

    // using pop_heap() function to move the largest element to the end
    pop_heap(vc.begin(), vc.end());
    cout << endl << "Heap vc after pop_heap(): ";
    print(vc);

    // actually removing the element from the heap using pop_back()
    vc.pop_back();
    cout << "Heap vc after pop_back(): ";
    print(vc);

    sort_heap(begin(vc),end(vc));
    cout << endl << "Heap vc after sort_heap : ";
    print(vc);

    vector<int> v1 = {40, 30, 25, 35, 15};

    cout<<endl<<endl;
    // Declaring heap iterator
    vector<int>::iterator it1;

    // Checking if container is heap
    // using is_heap()
    is_heap(v1.begin(), v1.end())
        ? cout << "The container v1 is heap "
        : cout << "The container v1 is not heap"; // ternary operator
    cout << endl;

    // using is_heap_until() to check position
    // till which container is heap
    it1 = is_heap_until(v1.begin(), v1.end());

    // Displaying heap range elements
    cout << "The heap elements in container v1 are : ";
    print(v1);

    return 0;
}