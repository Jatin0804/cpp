//C++ program to display the elements of two dimensional array by passing it to a function.

#include<iostream>
using namespace std;

//Define a function.
//Pass a 2D array as a parameter.
int r,c;
void display(int num[][100])
{
    cout<<"\nDisplaying values : ";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cout<<"\nNum["<<i<<"]["<<j<<"] : "<<num[i][j];
}

int main()
{
    cout<<"Enter no of rows: ";
    cin>>r;
    cout<<"Enter no of columns: ";
    cin>>c;
    //Initialise 2D array.
    int num[r][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter value of element["<<i<<"]["<<j<<"] :";
            cin>>num[i][j];
        }
    }

    //Call the function.
    //Pass A 2D array as a function.
    display(num);

    return 0;
}
