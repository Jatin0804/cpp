/*
1. partition(beg, end, condition) :- This function is used to partition the elements on basis of condition mentioned in its arguments.

2. is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned else returns false.

3. stable_partition(beg, end, condition) :- This function is used to partition the elements on basis of condition
mentioned in its arguments in such a way that the relative order of the elements is preserved..

4. partition_point(beg, end, condition) :- This function returns an iterator pointing to the partition point of container i.e.
the first element in the partitioned range [beg,end) for which condition is not true. The container should already be partitioned for this function to work.

5. partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements in the different containers mentioned in its arguments. 
It takes 5 arguments. Beginning and ending position of container, beginning position of new container where elements have to be copied (elements returning true for condition),
beginning position of new container where other elements have to be copied (elements returning false for condition) and the condition. 
Resizing new containers is necessary for this function.

*/

#include <iostream>
#include <algorithm> // for partition algorithm
#include <vector>    // for vector
using namespace std;
int main()
{
    // Initializing vector
    vector<int> vect = {2, 1, 5, 6, 8, 7};

    cout<<"vector vect is  : ";
    for(auto x: vect)
        cout<<x<<" ";
    cout<<endl<<endl;

    // Checking if vector is partitioned
    // using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x)
                   {
                       return x % 2 == 0;
                   }) ?
        cout << "Vector is partitioned" : 
        cout << "Vector is not partitioned";
    cout << endl;

    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x)
              {
                  return x % 2 == 0;
              });

    // Checking if vector is partitioned
    // using is_partitioned()
    cout<<"Partion done on condition : (vect % 2 == 0)."<<endl;
    is_partitioned(vect.begin(), vect.end(), [](int x)
                   {
                       return x % 2 == 0;
                   }) ?
        cout << "Now, vector is partitioned after partition operation" : 
        cout << "Vector is still not partitioned after partition operation";
    cout << endl;

    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect)
        cout << x << " ";
    cout<<endl<<endl;


    vector<int> vect1 = {2, 1, 5, 6, 8, 7};

    cout<<"vector vect1 is  : ";
    for(auto x: vect1)
        cout<<x<<" ";
    cout<<endl<<endl;
    // partitioning vector using stable_partition()
    // in sorted order
    stable_partition(vect1.begin(), vect1.end(), [](int x)
                     { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The partitioned vector using stable_partition is : ";
    for (int &x : vect1)
        cout << x << " ";
    cout << endl;

    // Declaring iterator
    vector<int>::iterator it1;

    // using partition_point() to get ending position of partition
    auto it = partition_point(vect1.begin(), vect1.end(), [](int x)
                              { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The vector elements returning true for condition are : ";
    for (it1 = vect1.begin(); it1 != it; it1++)
        cout << *it1 << " ";
    cout << endl << endl;

    vector<int> vect2 = {2, 1, 5, 6, 8, 7};

    cout<<"vector vect2 is  : ";
    for(auto x: vect2)
        cout<<x<<" ";
    cout<<endl<<endl;

    vector<int> vect3;
    vector<int> vect4;

    // Resizing vectors to suitable size using count_if() and resize()
    int n = count_if(vect2.begin(), vect2.end(), [](int x)
                     {
                         return x % 2 == 0;
                     });
    vect3.resize(n);
    vect4.resize(vect2.size() - n);

    // Using partition_copy() to copy partitions
    partition_copy(vect2.begin(), vect2.end(), vect3.begin(), vect4.begin(), [](int x)
                   { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The elements that return true for condition are : ";
    for (int &x : vect3)
        cout << x << " ";
    cout << endl;

    // Displaying partitioned Vector
    cout << "The elements that return false for condition are : ";
    for (int &x : vect4)
        cout << x << " ";
    cout << endl;

    return 0;
}