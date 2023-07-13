//Using sort() function
// Time Complexity : O(nlogn)
// Auxiliary Space : O(1)

#include<iostream>
                                            using namespace std;
#include<algorithm>

void show(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
}

int main(void)
{
    int arr[]={4,94,157,74,7,51,489,741,77,79,45,85,7};

    int asize= sizeof(arr)/sizeof(arr[0]);
    cout<<"The array before sorting is : ";
    show(arr,asize);

    sort(arr,arr+asize);
    cout<<"\nThe array after sorting is : ";
    show(arr,asize);

    return 0;
}