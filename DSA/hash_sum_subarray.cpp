// Implement a function called subarraySum() that finds a continuous subarray within a given vector of integers that adds up to a specific target number.

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

/*
vector<int> subarraySum(const vector<int> &nums, int target)
{
    unordered_map<int, int> sumMap;
    int cumulativeSum = 0;
    int startIndex = -1;

    // Iterate through the numbers and calculate cumulative sum
    for (int i = 0; i < nums.size(); i++)
    {
        cumulativeSum += nums[i];

        // Check if there is a subarray with sum equal to the target
        if (cumulativeSum == target)
        {
            startIndex = 0;
            return vector<int>(nums.begin(), nums.begin() + i + 1);
        }
        else if (sumMap.count(cumulativeSum - target) > 0)
        {
            startIndex = sumMap[cumulativeSum - target] + 1;
            return vector<int>(nums.begin() + startIndex, nums.begin() + i + 1);
        }

        sumMap[cumulativeSum] = i;
    }

    // Return an empty vector if no subarray is found
    return {};
}

vector<int> subarraySum(const vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j]; 
            if (sum == target)
            {
                return vector<int>(nums.begin() + i, nums.begin() + j + 1);
            }
        }
    }

    // Return an empty vector if no subarray is found
    return {};
}
*/

// Function to find a continuous subarray which adds up to target
vector<int> subarraySum(const vector<int> &nums, int target)
{
    // Initialize an unordered map to store sum of elements up to an index
    unordered_map<int, int> sumIndex;

    // Initialize 0 sum at index -1
    sumIndex[0] = -1;

    // Initialize currentSum to 0
    int currentSum = 0;

    // Iterate through nums array
    for (int i = 0; i < nums.size(); i++)
    {
        // Accumulate sum
        currentSum += nums[i];

        // 'find' function is used to search 'currentSum - target' in the map
        // 'end' function gives an iterator pointing to past-the-end element
        // If 'currentSum - target' is not found in map, 'find' returns 'end'
        // So, if 'find' does not return 'end', it means 'currentSum - target'
        // exists in the map, which implies a subarray with sum equals to
        // 'target' has been found
        if (sumIndex.find(currentSum - target) != sumIndex.end())
        {
            // Return the indices of subarray which adds up to target
            return {sumIndex[currentSum - target] + 1, i};
        }

        // Record the current sum and its index in the map
        sumIndex[currentSum] = i;
    }

    // If no such subarray is found, return an empty vector
    return {};
}

int main()
{
    vector<int> numbers = {1, 4, 20, 3, 10, 5};
    int target = 33;
    vector<int> result = subarraySum(numbers, target);

    if (!result.empty())
    {
        cout << "Subarray with sum " << target << " found at index : { ";
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    else
    {
        cout << "No subarray found with sum " << target << endl;
    }

    return 0;
}
