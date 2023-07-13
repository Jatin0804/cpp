#include<iostream>

/* fstream header file for ifstream, ofstream, fstream classes */
#include<fstream>
using namespace std;

int main(void)
{
  // Creation of ofstream class object
  ofstream fout;
  string line;

  // by default ios::out mode, automatically deletes the content of file.
  //To append the content, open in ios:app fout.open("sample.txt", ios::app)
  fout.open("sample.txt");

  // Execute a loop If file successfully opened
  while(fout)
  {
    //read a line from standard input.
    getline(cin,line);

    //press -1 to exit.
    if(line=="-1")
     break;

    //write line in file.
    fout<<line<<endl;
  }

  //close file
  fout.close();

  //Creation of istreamm object to read the file.
  ifstream fin;

  // by default open mode = ios::in mode
  fin.open("sample.txt");

  // Execute a loop until EOF (End of File)
  while(fin)
  {
    getline(fin,line);

    cout<<line<<endl;
  }
  fin.close();
}
