// program to find dupliactes values in a vector

#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicatesUsingVector(const vector<int> &nums)
{
    vector<int> dupes;
    vector<int> snums=nums;
    sort(snums.begin(),snums.end());

    for(int i=1;i<snums.size();i++)
    {
        if(snums[i]==snums[i-1])
            dupes.push_back(snums[i]);
    }
    return dupes;
}

vector<int> findDuplicatesUsingHash(const vector<int> &nums)
{
    // Map to store number counts
    unordered_map<int, int> numCounts;

    // Iterate through the nums vector and count each number
    for (int num : nums)
    {
        numCounts[num]++;
    }

    // Vector to store the duplicate numbers
    vector<int> duplicates;

    // Iterate through the number counts
    for (const auto &entry : numCounts)
    {
        // Check if the count is greater than 1 (duplicate)
        if (entry.second > 1)
        {
            // Add the duplicate number to the duplicates vector
            duplicates.push_back(entry.first);
        }
    }

    // Return the duplicates vector
    return duplicates;
}

int main(void)
{
    vector<int> v1{1,2,3,5,4,1,0,5,6,4,2};
    vector<int> v2=findDuplicatesUsingVector(v1);
    vector<int> v3 = findDuplicatesUsingHash(v1);

    for (auto i : v1)
        cout << i << " ";

    cout<<endl<<endl;
    for (auto i:v2)
        cout << i << " ";

    cout<<endl<<endl;
    for (auto i:v3)
        cout << i << " ";

    return 0;
}