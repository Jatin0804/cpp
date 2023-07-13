/*
     4 hacks of file handling : 
1. rename
2. remove
3. file size
4. check existence
*/

#include<iostream>
using namespace std;
#include<stdlib.h>

unsigned long long int filesize(const char* filename)
{
    //open the file
    FILE *fh=fopen(filename,"rb");
    fseek(fh,0,SEEK_END);
    unsigned long long int size=ftell(fh);
    fclose(fh);

    return size;
}

bool fileExists(const char* fname)
{
    FILE *file;
    if(file=fopen(fname,"r"))
    {
        fclose(file);
        return true;
    }
    return false;
}

int main(void)
{
    cout<<filesize("Sample.txt")<<"Bytes"<<endl;
    cout<<filesize("Input.txt")<<"Bytes"<<endl;

    if(fileExists("Sample.txt")==true)
        cout<<"The file exists."<<endl;
    else
        cout<<"File doesnot exist."<<endl;

    rename("Sample.txt","Sample1.txt");

    remove("Sample1.txt");

    if (fileExists("Sample1.txt") == true)
        cout << "The file exists." << endl;
    else
        cout << "File doesnot exist." << endl;

    return 0;
}