#include "exercise.h"

string reverseString(const string &str)
{
    // Stack to store characters of the input string
    stack<char> charStack;

    // Create an empty reversed string
    string reversedString;

    // Iterate through the input string and push each character onto the stack
    for (char c : str)
    {
        charStack.push(c);
    }

    // Pop characters from the stack and add them to the reversed string
    while (!charStack.empty())
    {
        reversedString += charStack.top();
        charStack.pop();
    }

    // Return the reversed string
    return reversedString;
}