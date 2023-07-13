// program to  Implement a function called firstNonRepeatingChar() that finds and returns the first non-repeating character in a given string.

#include<bits/stdc++.h>
using namespace std;


char firstNonRepeatingChar(const string &input_string)
{
    // Map to store character counts
    unordered_map<char, int> charCounts;

    // Iterate through the input string and count each character
    for (char c : input_string)
    {
        charCounts[c]++;
    }

    // Iterate through the input string again
    for (char c : input_string)
    {
        // Check if the character count is 1 (non-repeating)
        if (charCounts[c] == 1)
        {
            return c; // Return the first non-repeating character
        }
    }

    // Return a null character if no non-repeating character is found
    return '\0';
}

int main()
{
    string str = "hello world";
    char result = firstNonRepeatingChar(str);

    if (result == '\0')
    {
        cout << "No non-repeating character found." << endl;
    }
    else
    {
        cout << "First non-repeating character: " << result << endl;
    }

    return 0;
}