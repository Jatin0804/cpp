#include<iostream>
using namespace std;
#include<fstream>

int main(void)
{
    fstream fio;
    string line;

    //default open mode=ios::in|ios::out
    //ios:trunc deletes all data before open
    fio.open("sample.txt",ios::trunc|ios::out|ios::in);

    cout<<"Write content on file :\n";
    while(fio)
    {
        getline(cin,line);
        if(line=="-1")
        break;

        fio<<line<<endl;
    }
    
    //pointer go to beginning of file
    fio.seekg(0,ios::beg);

    cout<<"\n\n\n Content of files are: \n\n";
    while(fio)
    {
        getline(fio,line);
        cout<<line<<endl;
    }

    fio.close();
    return 0;
}