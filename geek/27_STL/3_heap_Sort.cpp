//Heap Sort
//Time complexity : O(n*log(n))
//Space complexity : O(1)

#include<iostream>
using namespace std;

//to heapify a subtree rooted with node i which is an index in array[]
//n is size of heap
void heapify(int  array[], int n, int i)
{
    int largest=i;  // initialize largest to root
    int l=2*i+1; // left = 2*i + 1
    int r=2*i+2; //right = 2*i + 2

    //if left child is larger than root
    if(l < n && array[l] > array[largest])
        largest=l;
    
    //if right child is larger than root
    if(r < n && array[r] > array[largest])
        largest=r;
    
    //if largest is not root
    if(largest!=i)
    {
        swap(array[i], array[largest]);

        // recusive heapify the affected sub tree
        heapify(array, n, largest);
    }    
}

//main function to do heap sort
void heapSort(int array[],int n)
{
    //build heap(rearrange array)
    for(int i=n/2-1;i>=0;i--)
        heapify(array,n,i);

    //one by one extract an element from heap
    for(int i=n-1;i>=0;i--)
    {
        //move current node to end
        swap(array[0],array[i]);

        //cal max heapify on reduced heap
        heapify(array,i,0);
    }
}

//print array
void printArray(int array[],int n)
{
    for(int i=0;i<n;i++)
        cout<<array[i]<<"\t";
    cout<<endl;
}

int main(void)
{
    int array[]={4,54,7,1,7,91,99,97,7,845,4,87,63,4,56};
    int asize=sizeof(array)/sizeof(array[0]);

    cout<<"Array before seapping is : "<<endl;
    printArray(array,asize);

    heapSort(array,asize);

    cout<<"Array after using heap sort is : "<<endl;
    printArray(array,asize);

    return 0;
}