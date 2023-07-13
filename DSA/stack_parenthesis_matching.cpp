bool isBalancedParentheses(const string &parentheses)
{
    // Stack to store the opening parentheses
    stack<char> charStack;

    // Iterate through the input string
    for (char p : parentheses)
    {
        // If the current character is an opening parenthesis, push it onto the stack
        if (p == '(')
        {
            charStack.push(p);
        }
        else if (p == ')')
        { // If the current character is a closing parenthesis
            // Check if the stack is empty or the top of the stack
            // is not an opening parenthesis
            if (charStack.empty() || charStack.top() != '(')
            {
                return false;
            }
            // Pop the matching opening parenthesis from the stack
            charStack.pop();
        }
    }

    // Return true if the stack is empty, indicating balanced parentheses
    return charStack.empty();
}