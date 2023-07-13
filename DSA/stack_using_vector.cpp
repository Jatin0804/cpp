#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
    vector<int> stackList;

public:
    vector<int> &getStackList()
    {
        return stackList;
    }

    void printStack()
    {
        for (int i = stackList.size() - 1; i >= 0; i--)
        {
            cout << stackList[i] << endl;
        }
    }

    bool isEmpty()
    {
        return stackList.size() == 0;
    }

    int peek()
    {
        if (isEmpty())
        {
            return int();
        }
        else
        {
            return stackList[stackList.size() - 1];
        }
    }

    int size()
    {
        return stackList.size();
    }

    void push(int value)
    {
        stackList.push_back(value);
    }

    void pop()
    {
        if (!isEmpty())
        {
            stackList.pop_back();
        }
    }
};