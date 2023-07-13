//Insertion sort
//Time complexity : O(n^2)
//space complexity : O(1)

#include<bits\stdc++.h>
using namespace std;

void insertionSort(int array[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=array[i];
        j=i-1;

        //move elemenst sof array that greater than key to one position ahead
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}

// print array
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << "\t";
    cout << endl;
}

int main(void)
{
    int array[] = {4, 54, 7, 1, 7, 91, 99, 97, 7, 845, 4, 87, 63, 4, 56};
    int asize = sizeof(array) / sizeof(array[0]);

    cout << "Array before seapping is : " << endl;
    printArray(array, asize);

    insertionSort(array, asize);

    cout << "Array after using isnertion sort is : " << endl;
    printArray(array, asize);

    return 0;
}