#include<iostream>
using namespace std;

void merge(int array[], int left, int right, int mid)
{
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftArray[leftSize];
    int rightArray[rightSize];

    for (int i = 0; i < leftSize; i++)
        leftArray[i] = array[left + i];

    for (int j = 0; j < rightSize; j++)
        rightArray[j] = array[mid + j + 1];

    int i = 0, j = 0, index = left;

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[index] = leftArray[i];
            index++;
            i++;
        }
        else
        {
            array[index] = rightArray[j];
            index++;
            j++;
        }
    }

    while (i < leftSize)
    {
        array[index] = leftArray[i];
        index++;
        i++;
    }

    while (j < rightSize)
    {
        array[index] = rightArray[j];
        index++;
        j++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);

    merge(array, left, right, mid);
}

int main(void)
{
    int array[] = {1, 5, 9, 7, 2, 0, 4, 36, 4, 2, 0, 6, 5, 9, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int left = 0;
    int right = size - 1;

    cout << "Array is : ";
    for (auto i : array)
        cout << i << " ";

    mergeSort(array, left, right);

    cout << "\n\nArray after merge sort :: ";
    for (auto i : array)
        cout << i << " ";

    return 0;
}