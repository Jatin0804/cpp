/*
Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values. 
Some Basic Functions associated with multiset: 

begin() – Returns an iterator to the first element in the multiset –>  O(1)
end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
size() – Returns the number of elements in the multiset –> O(1)
max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
empty() – Returns whether the multiset is empty –> O(1)
insert (x) – Inserts the element x in the multiset –> O(log n)
clear () – Removes all the elements from the multiset –> O(n)
erase(x) – Removes all the occurrences of x –> O(log n)
*/

/*
begin()	Returns an iterator to the first element in the multiset.
end()	Returns an iterator to the theoretical element that follows the last element in the multiset.
size()	Returns the number of elements in the multiset.
max_size()	Returns the maximum number of elements that the multiset can hold.
empty()	Returns whether the multiset is empty.
pair insert(const g)	Adds a new element ‘g’ to the multiset.
iterator insert (iterator position,const g)	Adds a new element ‘g’ at the position pointed by the iterator.
erase(iterator position)	Removes the element at the position pointed by the iterator.
erase(const g)	Removes the value ‘g’ from the multiset.
clear()	Removes all the elements from the multiset.
key_comp() / value_comp()	Returns the object that determines how the elements in the multiset are ordered (‘<‘ by default).
find(const g)	Returns an iterator to the element ‘g’ in the multiset if found, else returns the iterator to end.
count(const g)	Returns the number of matches to element ‘g’ in the multiset.
lower_bound(const g)	Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the multiset if found, else returns the iterator to end.
upper_bound(const g)	Returns an iterator to the first element that will go after the element ‘g’ in the multiset.
multiset::swap()	This function is used to exchange the contents of two multisets but the sets must be of the same type, although sizes may differ.
multiset::operator=	This operator is used to assign new contents to the container by replacing the existing contents.
multiset::emplace()	This function is used to insert a new element into the multiset container.
multiset equal_range()	Returns an iterator of pairs. The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
multiset::emplace_hint()	Inserts a new element in the multiset.
multiset::rbegin()	Returns a reverse iterator pointing to the last element in the multiset container.
multiset::rend()	Returns a reverse iterator pointing to the theoretical element right before the first element in the multiset container.
multiset::cbegin()	Returns a constant iterator pointing to the first element in the container.
multiset::cend()	Returns a constant iterator pointing to the position past the last element in the container.
multiset::crbegin()	Returns a constant reverse iterator pointing to the last element in the container.
multiset::crend()	Returns a constant reverse iterator pointing to the position just before the first element in the container.
multiset::get_allocator()	Returns a copy of the allocator object associated with the multiset.
*/

#include<iostream>
using namespace std;
#include<iterator>
#include<set>
#include<bits/stdc++.h>

int main(void)
{
    multiset<int, greater<int> > mset;
    mset.insert(10);
    mset.insert(90);
    mset.insert(50);
    mset.insert(80);
    mset.insert(80);
    mset.insert(60);
    mset.insert(70);
    mset.insert(50);
    mset.insert(20);
    mset.insert(10);
    mset.insert(30);
    mset.insert(40);
    mset.insert(50);
    mset.insert(80);

    cout<<"mSet is : ";
    for( auto i:mset)
        cout<<i<<"  ";

    auto itr = mset.begin();

    multiset<int> mset2(begin(mset),mset.end());
    cout<<endl<<endl<<"mset2 after assigning from mset is  : ";
    for (itr=mset2.begin(); itr!=end(mset2);itr++)
    cout << *itr << "  ";

    mset2.erase(begin(mset2),mset2.find(40));
    cout<<endl<<"mset2 after erase(begin,find(50)) : ";
    for( auto i:mset2)
        cout<<i<<"  ";

    int num;
    num = mset2.erase(80);
    cout<<endl<<"erase(80) : "<<num<<" removed";
    cout<<endl<<"mset2 after erase(80) : ";
    for( auto i:mset2)
        cout<<i<<"  ";
    cout<<endl<<endl;

    // lower bound and upper bound for multiset gquiz1
    cout << "\nmset.lower_bound(40) : "
         << *mset.lower_bound(40) << endl;
    cout << "mset.upper_bound(40) : "
         << *mset.upper_bound(40) << endl;

    // lower bound and upper bound for multiset gquiz2
    cout << "mset2.lower_bound(40) : "
         << *mset2.lower_bound(40) << endl;
    cout << "mset2.upper_bound(40) : "
         << *mset2.upper_bound(40) << endl;

    return 0;
}
