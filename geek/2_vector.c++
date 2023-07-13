#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> g1;
    for(int i=1;i<=10;i++)
    g1.push_back(i);

    cout<<"\n\"Iterators in vector.\"\nOutput of begin and end : ";
    for(auto i=g1.begin();i != g1.end(); i++)
    cout<<*i<<" ";

    cout << "\nOutput of cbegin and cend : ";
    for (auto i = g1.cbegin(); i != g1.cend(); i++)
    cout << *i << " ";

    cout << "\nOutput of rbegin and rend : ";
    for (auto i = g1.rbegin(); i != g1.rend(); i++)
    cout << *i << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto i = g1.crbegin(); i != g1.crend(); i++)
    cout << *i << " ";

    cout<<"\n\n\"Functions in vector.\"\nSize of vector : "<<g1.size();
    cout<<"\nCapacity of vector : "<<g1.capacity();
    cout<<"\nMax Size of vector : "<<g1.max_size();

    g1.resize(5);
    cout<<"\nVector after resize to 5 \nSize : "<<g1.size();

    if(g1.empty())
    cout<<"\nEmpty vector.";
    else
    cout<<"\nNot empty vector. ";

    g1.shrink_to_fit();
    cout<<"\nAfter shrink_to_fit , Vector elements : ";
    for (auto i = g1.begin(); i != g1.end(); i++)
    cout << *i << " ";

    g1.resize(10);
    cout << "\nVector after resize to 10 \nSize : " << g1.size();

    g1.shrink_to_fit();
    cout << "\nAfter shrink_to_fit , Vector elements : ";
    for (auto i = g1.begin(); i != g1.end(); i++)
    cout << *i << " ";

    vector<int> g2;
    for (int i = 1; i <= 10; i++)
    g2.push_back(i*10);

    cout << "\n\n\"Element acces in vector.\"\nOutput of g2 vector : ";
    for (auto i = g2.begin(); i != g2.end(); i++)
    cout << *i << " ";

    cout<<"\nReference operator [g] : g2[5] : "<<g2[5];
    cout<<"\nat : g2.at(4) : "<<g2.at(4);
    cout<<"\nfront() : g2.front() : "<<g2.front();
    cout<<"\nback() : g2.back() : "<<g2.back();

    int *pos=g2.data();
    cout<<"\nThe first element is : "<<*pos;

    cout<<"\n\n\"Modifiers in vector.\"";

    vector<int> v;
    //fill vector with 10 five times
    v.assign(5,10);
    cout<<"\nThe vector elements of v are : ";
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";

    //insert 15 to last element
    v.push_back(15);
    int n=v.size();
    cout<<"\nAfter pushback(15),\nThe last element in vector is  : "<<v[n-1];
    cout << "\nThe vector elements of v are : ";
    for (auto i = 0; i < n; i++)
    cout << v[i] << " ";

    //remove last element
    v.pop_back();
    cout<<"\nAfter popping, vector is : ";
    for(auto i=v.begin();i != v.end();i++)
    cout<<*i<<" ";

    //insert 5 at beginning
    v.insert(v.begin(),5);
    cout<<"\nInsert 5 at beginning : ";
    for (auto i = v.begin(); i != v.end(); i++)
    cout << *i << " ";

    //remove first element
    v.erase(v.begin());
    cout << "\nDelete first element : ";
    for (auto i = v.begin(); i != v.end(); i++)
    cout << *i << " ";

    //insert using emplace
    v.emplace(v.begin(),15);
    cout << "\nAfter emplace,\nThe vector elements of v are : ";
    for (auto i = 0; i < v.size(); i++)
    cout << v[i] << " ";

    //emplace at end
    v.emplace_back(200);
    cout << "\nAfter emplace_back,\nThe vector elements of v are : ";
    for (auto i = 0; i < v.size(); i++)
    cout << v[i] << " ";

    //erases the vector
    v.clear();
    cout<<"\nAfter clear, vector size : "<<v.size();

    // for (auto i = 0; i < n; i++)
    // cout << v[i] << " ";

    cout<<"\n\n\"Swap 2 vactors : \"";
    vector<int> v1,v2;

    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    cout<<"\nVector 1 is : ";
    for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

    cout << "\nVector 2 is : ";
    for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";

    v1.swap(v2);

    cout << "\nAfter swap,\nVector 1 is : ";
    for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";

    cout << "\nVector 2 is : ";
    for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";

    return 0;
}