void sortStack(stack<int> &inputStack)
{
    // Additional stack to temporarily store and sort elements
    stack<int> additionalStack;

    // Iterate until the input stack becomes empty
    while (!inputStack.empty())
    {
        // Store the top element of the input stack in temp
        int temp = inputStack.top();
        inputStack.pop();

        // Move elements from additionalStack to inputStack while
        // they are greater than temp
        while (!additionalStack.empty() && additionalStack.top() > temp)
        {
            inputStack.push(additionalStack.top());
            additionalStack.pop();
        }

        // Push temp onto the additionalStack
        additionalStack.push(temp);
    }

    // Move sorted elements back to inputStack
    while (!additionalStack.empty())
    {
        inputStack.push(additionalStack.top());
        additionalStack.pop();
    }
}