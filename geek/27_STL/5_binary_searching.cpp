//Binary searching using function 

#include<iostream>
using namespace std;
#include<algorithm>

void show(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
}

int main(void)
{
    int arr[]={4,454,54,51,4,124,6,49,41,5,851,2,974};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Array is : "<<endl;
    show(arr,size);

    cout<<"Firstly, we sort the array : ";
    sort(arr,arr+size);
    cout<<"Sorted array is : "<<endl;
    show(arr,size);

    cout<<"\nNow the Binary searching : \nFor element 2 :"<<endl;
    if(binary_search(arr,arr+size,2))
        cout<<"Element found in array."<<endl;
    else
        cout<<"Element not found."<<endl;

    cout<<"\nNow the Binary searching for element 40 :"<<endl;
    if(binary_search(arr,arr+size,40))
        cout<<"Element found in array."<<endl;
    else
        cout<<"Element not found."<<endl;

    return 0;
}