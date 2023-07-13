#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    ofstream fout;
    string line;

    //deafult ios::out mode
    fout.open("Sample.txt");

    while(fout)
    {
        getline(cin,line);
        //press -1 to exit
        if(line=="-1")
        break;

        fout<<line<<endl;
    }

    fout.close();

    ifstream fin;
    //default open mode ios::in
    cout<<"\n\n\n File content are : \n\n";
    fin.open("Sample.txt");

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();

    return 0;
}