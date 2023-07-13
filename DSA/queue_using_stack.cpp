#include <stack>

using namespace std;

class MyQueue
{
private:
    stack<int> stack1;
    stack<int> stack2;

public:
    void enqueue(int value)
    {
        // Move all elements from stack1 to stack2
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }

        // Push the new value onto stack1
        stack1.push(value);

        // Move all elements back from stack2 to stack1
        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
    }

    int peek()
    {
        return stack1.top();
    }

    bool isEmpty()
    {
        return stack1.empty();
    }

    void dequeue()
    {
        // Check if the queue (represented by stack1) is not empty
        if (!isEmpty())
        {
            // Remove the front element by popping it from the stack
            stack1.pop();
        }
    }
};