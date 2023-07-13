#include<iostream>
using namespace std;

/* fstream header file for ifstream, ofstream, fstream classes */
#include<fstream>

int main(void)
{
  //fstream class object
  fstream fio;

  string line;

  // by default openmode = ios::in|ios::out mode
    // Automatically overwrites the content of file, To append the content, open in ios:app
    // fio.open("sample.txt", ios::in|ios::out|ios::app)
    // ios::trunc mode delete all content before open
  fio.open("sample.txt",ios::trunc|ios::out|ios::in);

  // Execute a loop If file successfully Opened
  while(fio)
  {
    getline(cin,line);

    //-1 to exit
    if(line=="-1")
    break;

    //write line in file
    fio<<line<<endl;
  }

  // Execute a loop until EOF (End of File) point read pointer at beginning of file
  fio.seekg(0,ios::beg);

  while(fio)
  {
    //read a line from file.
    getline(fio,line);

    //print line in console
    cout<<line<<endl;
  }

  //close file.
  fio.close();
}
