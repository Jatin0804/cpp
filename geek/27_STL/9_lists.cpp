#include<iostream>
using namespace std;
#include<list>
#include<iterator>
#include<string>
#include<bits/stdc++.h>

void showlist(list<int> g)
{
    list<int>::iterator it;
    for(it = g.begin() ; it!=g.end() ; it++)
        cout<<"\t"<<*it;
    cout<<endl;
}

//function to check if a number is even or not
bool prime(const int& value)
{
    int i;
    for(i=2;i<value;i++)
    {
        if(value%i==0)
        {
            return false;
        }
    }
    if(value==i)
        return true;
}

//function for binary_predicate
//use in unique
bool compare(double a,double b)
{
    return ((int)a==(int)b);
}

int main(void)
{
    //basic operations
    list<int> glist1,glist2;
    for(int i=0;i<10;i++)
    {
        glist1.push_back(i*2);
        glist2.push_front(i*3);
    }

    cout<<"\nList 1(glist) is : ";
    showlist(glist1);
    cout<<"\nList 2(glist2) is : ";
    showlist(glist2);

    cout<<endl<<"glist1.front() : "<<glist1.front();
    cout<<endl<<"glist2.back() : "<<glist2.back();

    cout<<endl<<"\nglist1.pop_front() : ";
    glist1.pop_front();
    showlist(glist1);

    cout << endl << "glist2.pop_back() : ";
    glist1.pop_back();
    showlist(glist2);

    cout << endl <<  "glist1.reverse() : ";
    glist1.reverse();
    showlist(glist1);

    cout << endl << "glist2.sort() : ";
    glist2.sort();
    showlist(glist2);

    list<int> list3;
    
    //using assign to insert multiple numbers 
    //create 3 occurences of 2
    list3.assign(3,2);

    //INITIALIZING LIST ITERATOR TO BEGINNING   
    list<int>::iterator it=list3.begin();

    //iterator point to 3rd position
    advance(it,2);

    cout<<endl<<"List3 is : ";
    showlist(list3);

    //using insert to insert 1 element at 3rd position
    list3.insert(it,5);

    cout<<endl<<"the list3 after inserting 1 element using insert() is : ";
    showlist(list3);

    //using insert to insert 2 elemenst at 4th position
    //insert 2 occurences of 7
    list3.insert(it,2,7);

    cout<<endl<<"list3 after insering multiple items : ";
    showlist(list3);

    int size1=glist1.size();
    cout<<endl<<"The size of list1 : "<<size1;
    int size2=glist2.size();
    cout<<endl<<"The size of list2 : "<<size2;
    int size3=list3.size();
    cout<<endl<<"The size of list3 : "<<size3;

    //rbegin and rend
    cout<<endl<<endl<<"List3 using rbegin and rend : ";
    for(auto it1=list3.rbegin();it1!=list3.rend();it1++)
        cout<<"\t"<<*it1;

    //cbegin and cend
    cout<<endl<<endl<<"The first element is : "<<*list3.cbegin();
    cout<<endl<<"List3 using cbegin and cend : ";
    for(auto it1=list3.cbegin();it1!=list3.cend();it1++)
        cout<<"\t"<<*it1;

    //crbegin and crend
    cout<<endl<<endl<<"The last element is : "<<*list3.crbegin();
    cout<<endl<<"List3 using crbegin and crend : ";
    for(auto it1=list3.crbegin();it1!=list3.crend();it1++)
        cout<<"\t"<<*it1;

    //empty function
    if(list3.empty())
        cout<<endl<<endl<<"List 3 is empty list.\n";
    else
        cout<<endl<<endl<<"List 3 is Not empty list.\n";

    cout<<endl<<"list 3 before deleting first element : ";
    showlist(list3);
    it=list3.begin();
    list3.erase(it);
    cout<<endl<<"list 3 after deleting first element : ";
    showlist(list3);

    list<int>::iterator it1=list3.begin();
    it=list3.begin();
    advance(it1,3);
    list3.erase(it,it1);
    cout<<endl<<"list 3 after deleting multiple elements : ";
    showlist(list3);

    //remove function
    list3.insert(list3.begin(),5,100);
    cout<<endl<<"list 3 after assigning 5 instances of 100 : ";
    showlist(list3);
    list3.remove(100);
    cout<<endl<<"list 3 after removing all instances of 100 : ";
    showlist(list3);

    //resize
    cout<<endl<<"list 3 before resizing : ";
    showlist(list3);
    list3.resize(5);
    cout<<endl<<"list 3 after resizing to 5 : ";
    showlist(list3);
    list3.resize(1);
    cout<<endl<<"list 3 after resizing to 1 : ";
    showlist(list3);
    list3.resize(8,22);
    cout<<endl<<"list3 after resizing to 8 an dfilling with 22 : ";
    showlist(list3);

    //remove_if function
    list<int> list4;
    for(int i=1;i<100;i=i+2)
    {
        list4.push_back(i);
    }
    cout<<endl<<"list 4 before removing elements : ";
    showlist(list4);
    list4.remove_if(prime);
    cout<<endl<<"list 4 after removing elements : ";
    showlist(list4);

    //sort
    list<string> list5{"hi","hello","bye","thanks"};
    cout<<endl<<"list 5 before sorting : ";
    for (auto it = list5.begin(); it != list5.end(); ++it)
        cout << ' ' << *it;
    list5.sort();
    cout<<endl<<"list 5 after sorting : ";
    for (auto it = list5.begin(); it != list5.end(); ++it)
        cout << ' ' << *it;
    
    //maxsize
    cout<<endl<<endl<<"list max_size is : "<<list5.max_size();

    //unique
    list<double> list6={2.55,3.0,4.5,4.6,4.9,10.5,45.2,20.1,20.4,20.4,10.5,8.6,8.5,8.6};
    cout<<endl<<endl<<"list 6 before unique elements : ";
    for (auto it = list6.begin(); it != list6.end(); ++it)
        cout << *it << "\t";
    list6.sort();
    //unique without parameters
    list6.unique();
    cout<<endl<<"list 6 after unique elements : ";
    for (auto it = list6.begin(); it != list6.end(); ++it)
        cout << *it << "\t";
    list6.unique(compare);
    cout<<endl<<"list 6 after unique function with parameter : ";
    for (auto it = list6.begin(); it != list6.end(); ++it)
        cout << *it << "\t";

    //emplace 
    list<int> list7;
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
            list7.emplace_front(i);
        else
            list7.emplace_back(i);
    }
    cout<<endl<<endl<<"list 7 ausing emplace_front() and emplace_back() : ";
    showlist(list7);

    //clear
    cout<<endl<<"list 7 before clearing elements : ";
    showlist(list7);
    list7.clear();
    cout<<endl<<"list 7 after clear() : ";
    showlist(list7);

    //swap
    cout<<endl<<"list 1 before swapping elements : ";
    showlist(glist1);
    cout<<endl<<"list 2 before swapping elements : ";
    showlist(glist2);
    glist1.swap(glist2);
    cout<<"list 1 after swapping elements : ";
    showlist(glist1);
    cout<<"list 2 after swapping elements : ";
    showlist(glist2);

    //splice
    cout<<endl<<"list 1 before splice : ";
    showlist(glist1);
    cout<<"list 2 before splice : ";
    showlist(glist2);
    cout<<"list 3 before splice : ";
    showlist(list3);
    glist1.splice(glist1.begin(),glist2);
    cout<<endl<<"list 1 after splice in beginning : ";
    showlist(glist1);
    cout<<"list 2 after splice : ";
    showlist(glist2);
    glist1.splice(glist1.end(),list3);
    cout<<endl<<"list 1 after splice at end : ";
    showlist(glist1);
    cout<<"list 2 after splice : ";
    showlist(glist2);
    cout<<"list 3 after splice : ";
    showlist(list3);

    //merge
    list<int> list8={1,2,3,4,5};
    list<int> list9={10,20,50,60};
    cout<<endl<<"list 8 : ";
    showlist(list8);
    cout<<"list 9 : ";
    showlist(list9);
    list8.merge(list9);
    cout<<endl<<"list 8 after merge : ";
    showlist(list8);
    cout<<"list 9 : ";
    showlist(list9);
    

    return 0;
}