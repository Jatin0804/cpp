/*
merge(beg1, end1, beg2, end2, beg3) :- This function merges two sorted containers and stores in new container in sorted order (merge sort).
It takes 5 arguments, first and last iterator of 1st container, first and last iterator of 2nd container and 1st iterator of resultant container.


includes(beg1, end1, beg2, end2) :- This function is used to check whether one sorted container elements are including other sorted container elements or not.
 Returns true if 1st container includes 2nd container else returns false.

inplace_merge(beg1, beg2, end) :- This function is used to sort two consecutively placed sorted ranges in a single container.
It takes 3 arguments, iterator to beginning of 1st sorted range, iterator to beginning of 2nd sorted range, and iterator to last position.

set_union(beg1, end1, beg2, end2, beg3) :- This function computes the set union of two containers and stores in new container .
It returns the iterator to the last element of resultant container. It takes 5 arguments, first and last iterator of 1st container,
first and last iterator of 2nd container and 1st iterator of resultant container .
The containers should be sorted and it is necessary that new container is resized to suitable size.

set_intersection(beg1, end1, beg2, end2, beg3) :- This function computes the set intersection of two containers and stores in new container .
It returns the iterator to the last element of resultant container. It takes 5 arguments, first and last iterator of 1st container,
first and last iterator of 2nd container and 1st iterator of resultant container .
The containers should be sorted and it is necessary that new container is resized to suitable size.

set_difference(beg1, end1, beg2, end2, beg3) :- This function computes the set difference of two containers and stores in new container .
It returns the iterator to the last element of resultant container. It takes 5 arguments, first and last iterator of 1st container, 
first and last iterator of 2nd container and 1st iterator of resultant container .
 The containers should be sorted and it is necessary that new container is resized to suitable size.

set_symmetric_difference(beg1, end1, beg2, end2, beg3) :- This function computes the set symmetric difference of two containers and stores in new container .
It returns the iterator to the last element of resultant container. It takes 5 arguments, first and last iterator of 1st container, 
first and last iterator of 2nd container and 1st iterator of resultant container . 
The containers should be sorted and it is necessary that new container is resized to suitable size.
*/

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<iterator>

int main(void)
{
    vector<int> v1 = {1, 3, 4, 5, 20, 30};
    vector<int> v2 = {1, 5, 6, 7, 25, 30};

    cout << "Vector V1 is : ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    cout << "Vector V2 is : ";
    for (auto x : v2)
        cout << x << " ";
    cout << endl << endl;

    vector<int> v3(12);
    merge(v1.begin(), v1.end(), begin(v2), end(v2), v3.begin());

    cout << "The new container V3 after merging is : ";
    for (auto x : v3)
        cout << x << " ";
    cout << endl << endl;

    vector<int> v4 = {1, 3, 4, 5, 6, 20, 25, 30};
    cout << "Vector V4 is : ";
    for (auto x : v4)
        cout << x << " ";
    cout << endl ;

    includes(v4.begin(), v4.end(), v1.begin(), v1.end()) ? 
        cout<<"V4 includes V1" : 
        cout<<"V4 doesn't include V1";

    vector<int> v5(12);
    auto it = copy(begin(v1), end(v1), begin(v5));
            copy(v2.begin(), v2.end(), it);

    inplace_merge(v5.begin(), it, v5.end());

    cout << endl << endl << "The new container v5 after inplace_merging is : ";
    for (auto x : v5)
        cout << x << " ";
    cout << endl << endl;

    vector<int> v6(10);
    vector<int> v7(10);

    auto it1 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v6.begin());
    auto it2 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v7.begin());
    
    v6.resize(it1 - v6.begin());
    v7.resize(it2 - v7.begin());

    cout << "Union of two containers V1 and V2 is : ";
    for (int &x : v6)
        cout << x << " ";
    cout << endl << endl;

    cout << "Intersection of two containers V1 and V2 is : ";
    for (int &x : v7)
        cout << x << " ";
    cout << endl << endl;

    vector<int> v8(10);
    vector<int> v9(10);

    auto it3 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v8.begin());
    auto it4 = set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v9.begin());
    
    v8.resize(it3 - v8.begin());
    v9.resize(it4 - v9.begin());

    cout << "Difference of two containers V1 and V2 is : ";
    for (int &x : v8)
        cout << x << " ";
    cout << endl << endl;

    cout << "Symmetric Difference of two containers V1 and V2 is : ";
    for (int &x : v9)
        cout << x << " ";
    cout << endl << endl;

    return 0;
}