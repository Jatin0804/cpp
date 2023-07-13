#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void buubleSort(int array[], int size)
{
    
    // int size = sizeof(array)/sizeof(array[0]);

    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j > -1 && temp < array[j])
        {
            array[j + 1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        if (i != minIndex)
        {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

int main(void)
{
    int array[] = {9, 5, 1, 3, 8, 2, 6, 7, 8, 0, 5};
    int array1[11];
    copy(begin(array), end(array), begin(array1));
    int array2[11];
    copy(begin(array), end(array), begin(array2));
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Array is : ";
    for (auto i : array)
        cout << i << " ";

    buubleSort(array, size);
    cout << "\nArray after BubbleSort is : ";
    for (auto i : array)
        cout << i << " ";

    cout << "\n\n\nArray1 is : ";
    for (auto i : array1)
        cout << i << " ";

    insertionSort(array1, size);
    cout << "\nArray1 after InsertionSort is : ";
    for (auto i : array1)
        cout << i << " ";

    cout << "\n\n\nArray2 is : ";
    for (auto i : array2)
        cout << i << " ";

    selectionSort(array2, size);
    cout << "\nArray2 after SelectionSort is : ";
    for (auto i : array2)
        cout << i << " ";

    return 0;
}