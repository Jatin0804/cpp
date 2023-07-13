#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

void printx2(int a)
{
    cout << a * 2 << " ";
    if(a%2==0)
    throw a;
}
struct class2
{
    void operator()(int a)
    {
        cout << a * 3 << " ";
        if(a%2==0)
        throw a;
    }
} ob;

int main()
{
    int arr[]{1, 5, 4, 6, 0};
    cout << "\n Using arrays : ";
    try
    {
        cout << "\n Multiple of 2 is : ";
        for_each(arr, arr + 5, printx2);
    }   
    catch(int i)
    {
        cout<<"\n Exception element : "<<i;
    }
    try
    {
        cout << "\n Multiple of 3 is : ";
        for_each(arr, arr + 5, ob);
    }
    catch (int i)
    {
        cout << "\n Exception element : " << i;
    }

    vector<int> arr1 = {1, 5, 9, 3, 4};
    cout << "\n\n Using vectors : ";
    try
    {
        cout << "\n Multiple of 2 is : ";
        for_each(arr1.begin(), arr1.end(), printx2);
    }
    catch (int i)
    {
        cout << "\n Exception element : " << i;
    }
    try
    {
        cout << "\n Multiple of 2 is : ";
        for_each(arr1.begin(), arr1.end(), ob);
    }
    catch (int i)
    {
        cout << "\n Exception element : " << i;
    }
}