#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

void printx2(int a)
{
    cout<<a*2<<" ";
}
struct class2
{
    void operator() (int a)
    {
        cout<<a*3<< " ";
    }
}ob;

int main()
{
    int arr[] {1,5,4,6,0};
    cout<<"\n Using arrays : ";
    cout<<"\n Multiple of 2 is : ";
    for_each(arr,arr+5,printx2);
    cout<<"\n Multiple of 3 is : ";
    for_each(arr,arr+5,ob);

    vector<int> arr1={1,5,9,3,4};
    cout<<"\n\n Using vectors : ";
    cout << "\n Multiple of 2 is : ";
    for_each(arr1.begin(),arr1.end(),printx2);
    cout << "\n Multiple of 3 is : ";
    for_each(arr1.begin(), arr1.end(), ob);
}