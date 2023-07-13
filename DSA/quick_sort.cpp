#include <iostream>
using namespace std;

void swap(int array[], int first, int second)
{
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

int pivot(int array[], int pivotIndex, int endIndex)
{
    int swapIndex = pivotIndex;

    for (int i = pivotIndex + 1; i <= endIndex; i++)
    {
        if (array[i] < array[pivotIndex])
        {
            swapIndex++;
            swap(array, swapIndex, i);
        }
    }
    swap(array, swapIndex, pivotIndex);

    return swapIndex;
}

void quickSort(int array[], int left, int right)
{
    if (left >= right)
        return;

    int pivotIndex = pivot(array, left, right);
    quickSort(array, left, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, right);
}

int main(void)
{
    int array[] = {2, 1, 0, 3, 4, 8, 0, 9, 7, 0, 6, 5, 5, 2, 8, 0, 6};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Array is : ";
    for (auto i : array)
        cout << i << " ";

    quickSort(array, 0, size - 1);

    cout << "\n\nArray after quick sort :: ";
    for (auto i : array)
        cout << i << " ";

    return 0;
}