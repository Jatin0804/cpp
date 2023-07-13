#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
#include<map>

int main(void)
{
    vector<int> v={0,1,2,20,4,5,10};
    cout<<"\n Iterating over Vector by (auto i:v) : ";
    for(auto i:v)
    cout<<i<<" ";

    cout<<"\n Iterating over brackets by (int n:{}) : ";
    for(int n:{0,1,2,3,4,5})
    cout<<n<<" ";

    cout << "\n Iterating over array by int (n:a) : ";
    int a[]={0,1,4,5,7,5};
    for (int n : a)
    cout << n << " ";

    cout << "\n Iterating over loop for array by int (n:a) : ";
    for (int n : a)
    cout <<" Hi ";

    cout<<"\n Iterating over string by (char :str) : ";
    string str="This is string.";
    for(char c:str)
    cout<<c<<" ";

    cout<<"\n Iterating over map by (auto i:map) : ";
    map<int,int> Map({{1,1},{2,2},{3,3}});
    for(auto i:Map)
    cout<<"{"<<i.first<<","<<i.second<<"}\t";

    return 0;
}