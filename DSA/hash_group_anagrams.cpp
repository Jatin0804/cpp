// Implement a function called groupAnagrams() that groups a list of strings based on their anagram equivalence.

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <algorithm>

/*
vector<vector<string>> groupAnagrams(const vector<string> &strs)
{
    unordered_map<string, vector<string>> groups;

    // Group words by sorted form
    for (const string &word : strs)
    {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        groups[sortedWord].push_back(word);
    }

    // Convert groups to a vector of vectors
    vector<vector<string>> result;
    for (const auto &pair : groups)
    {
        result.push_back(pair.second);
    }

    return result;
}
*/

vector<vector<string>> groupAnagrams(const vector<string> &strings)
{
    // Map to store anagram groups with canonical forms as keys
    unordered_map<string, vector<string>> anagramGroups;

    for (const string &str : strings)
    {
        // Create the canonical form by sorting the string
        string canonical = str;
        sort(canonical.begin(), canonical.end());

        // Add the string to its anagram group
        anagramGroups[canonical].push_back(str);
    }

    // Vector to store the final result
    vector<vector<string>> result;

    // Iterate through anagram groups
    for (const auto &group : anagramGroups)
    {
        // Add the anagram group to the result
        result.push_back(group.second);
    }

    // Return the grouped anagrams
    return result;
}

int main()
{
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(words);

    // Print the grouped anagrams
    for (const auto &group : result)
    {
        cout << "Anagrams: ";
        for (const string &word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
