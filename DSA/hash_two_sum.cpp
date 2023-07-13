// Implement a function called twoSum() that finds two numbers in a given vector of integers that add up to a specific target number.

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

/*
vector<int> twoSum(const vector<int> &nums, int target)
{
    unordered_map<int, int> numIndexMap;

    // Iterate through the numbers and check if complement exists in the map
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (numIndexMap.count(complement) > 0)
        {
            return {numIndexMap[complement], i};
        }
        numIndexMap[nums[i]] = i;
    }

    // Return an empty vector if no two numbers add up to the target
    return {};
}
*/

vector<int> twoSum(const vector<int> &nums, int target)
{
    // Map to store numbers and their indices
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++)
    {
        // Get the current number and its complement
        int num = nums[i];
        int complement = target - num;

        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }

        // Store the current number and its index
        numMap[num] = i;
    }

    // Return an empty vector if no solution found
    return {};
}

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(numbers, target);

    if (result.size() == 2)
    {
        cout << "Indices of the two numbers: " << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
