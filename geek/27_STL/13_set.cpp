/*
Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. 
The values are stored in a specific sorted order i.e. either ascending or descending.
*/

#include<iostream>
using namespace std;
#include<set>
#include<iterator>
#include<bits/stdc++.h>

int main(void)
{
    set<char> st;
    st.insert('H');
    st.insert('E');
    st.insert('Y');
    st.insert('H');

    //ascending order
    cout<<"Set st in ascending order : ";
    for(auto& str: st)
    {
        cout<<str<<' ';
    }
    cout<<"\n";

    set<char,greater<char>> st1;
    st1.insert('H');
    st1.insert('E');
    st1.insert('Y');
    st1.insert('H');

    //descending order
    cout<<"Set st1 in descending order : ";
    for (auto &str : st1)
    {
        cout << str << ' ';
    }
    cout << "\n";

    set<int,greater<int>> s1;
    s1.insert(40);
    s1.insert(10);
    s1.insert(30);
    s1.insert(50);
    s1.insert(50);//only one 50 will be inserted
    s1.insert(80);
    s1.insert(90);
    s1.insert(20);

    cout<<"\n\nThe set s1 : ";
    for(auto itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<"  "<<*itr;
    }

    set<int> s2(s1.begin(),s1.end());
    cout << "\n\nThe set s2 : ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << "  " << *itr;
    }

    //remove all elements upto 30 in s2
    cout << "\n\nThe set s2 after removal of elememnts less than 30 : ";
    s2.erase(s2.begin(),s2.find(30));
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << "  " << *itr;
    }
    
    //remove any particular element
    cout << "\n\ns2.erase(50) : ";
    int num;
    num=s2.erase(50);
    cout<<num<<" removed\n";
    cout << "The set s2 after s2.erase(50) : ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << "  " << *itr;
    }
    cout<<endl<<endl;

    // lower bound and upper bound for set s1
    // lower bound gives the lowest value in set which is greater than inserted key , if key is not present 
    // upper bound gives the immediate upper value of inserted key 
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;

    // equal_range()
    /*
     Since set contains unique elements, the lower bound will be the element itself and the upper bound will point to the next element after key k.
     If there are no elements matching key K, the range returned is of length 0 with both iterators pointing to the first element which is greater than k
    */
    cout << "\n\nThe set s2 : ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << "  " << *itr;
    }
    auto it1 = s2.equal_range(40);
    cout << "\nThe lower bound of 40 is " << *it1.first;
    cout << "\nThe upper bound of 40 is " << *it1.second;

    // Function returns the last element
    it1 = s2.equal_range(100);
    cout << "\nThe lower bound of 100 is " << *it1.first;
    cout << "\nThe upper bound of 100 is " << *it1.second;

    // Function returns the range where the
    // element greater than 0 lies
    it1 = s2.equal_range(0);
    cout << "\nThe lower bound of 0 is " << *it1.first;
    cout << "\nThe upper bound of 0 is " << *it1.second;

    // begin()
    // end()
    // size()
    // max_size()
    // empty
    // insert()
    // insert(iterator position1, iterator position2)
    // erase(iterator)
    // erase(iterator1, iterator2)
    // clear() ==== to empty the set
    // count() === returns 0 or 1 for if element is present in set or not

    /*
    The difference between count() and find() functions in a set is count() returns 0 or 1 depending upon whether the element is not present or present respectively 
    whereas the find() function returns an iterator pointing to the value if present else next to the last value in the set.
    */

    // swap() === This function is used to exchange the contents of two sets but the sets must be of same type, although sizes may differ.
    // set1.swap(set2)

    // emplace() === This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exists in the set.
    
    /*
    emplace() vs insert : 
                         When we use insert, we create an object and then insert it into the multiset. 
                         With emplace(), the object is constructed in-place.
    */

    set<pair<char, int>> ms;

    // using emplace() to insert pair in-place
    ms.emplace('a', 24);

    // Below line would not compile
    // ms.insert('b', 25);

    // using emplace() to insert pair in-place
    ms.insert(make_pair('b', 25));

    // printing the set
    cout<<endl<<endl;
    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout << " " << (*it).first << " " << (*it).second << endl;
    cout<<endl;









    /*
    A position is passed in the parameter of the function which acts as a hint from where the searching operation starts before inserting the element at its current position. 
    The position only helps the process to get faster, it does not decide where the new element is to be inserted. 
    The new element is inserted following the property of the set container only.
    */
    set<int> s;
    auto it = s.emplace_hint(s.begin(), 1);

    // stores the position of 2's insertion
    it = s.emplace_hint(it, 2);

    // fast step as it directly
    // starts the search step from
    // position where 3 was last inserted
    s.emplace_hint(it, 3);

    // this is a slower step as
    // it starts checking from the
    // position where 3 was inserted
    // but 0 is to be inserted before 1
    s.emplace_hint(it, 0);

    // prints the set elements
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout<<endl;







    // find() 
    /*
    The function returns an iterator which points to the element which is searched in the set container. 
    If the element is not found, then the iterator points to the position just after the last element in the set.
    */
    auto pos1 = s.find(2);
    if (pos1 != s.end())
        cout << "Element 2 found at position : "
             << distance(s.begin(), pos1) << endl;
    else
        cout << "Element 2 not present in set";

    
    auto pos=s.find(6);
    if (pos != s.end())
        cout << "Element 6 found at position : "
             << distance(s.begin(), pos) << endl;
    else
        cout << "Element 6 not present in set";



    // rbegin()
    // rend()
    // cbegin()
    // cend()
    // crebegin()
    // crend()


    return 0;
}