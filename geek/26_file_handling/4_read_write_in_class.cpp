#include<iostream>
using namespace std;
#include<fstream>

class contestant
{
    public:
    string name;
    int age,ratings;

    int input();

    int out_highest_rated();
};

int contestant::input()
{
    //object to write in file
    ofstream file_obj;

    //opening in append mode
    file_obj.open("Input.txt",ios::app);

    //object of class contestant to input in file
    contestant obj;

    //feeding appropriate data in variables
    string str="Heysa";
    int age=18,ratings=2500;

    //assigning data into object 
    obj.name=str;
    obj.age=age;
    obj.ratings=ratings;

    //writing the object's data in file 
    file_obj.write((char*)&obj,sizeof(obj));

    //feeding appropriate data into variables
    str="Jerry";
    age=20;
    ratings=3000;

    obj.name=str;
    obj.age=age;
    obj.ratings=ratings;

    file_obj.write((char*)&obj,sizeof(obj));

    //close file
    file_obj.close();
    
    return 0;
}

int contestant::out_highest_rated()
{
    ifstream file_obj;

    //opening in input mode
    file_obj.open("Input.txt",ios::in);

    //object of class
    contestant obj;

    //reading from file into object obj
    file_obj.read((char*)&obj,sizeof(obj));

    //max to store maximum ratings
    int max=0;
    
    string highest;

    //checking till we have feed
    while(!file_obj.eof())
    {
        //assigning max ratings
        if(obj.ratings>max)
        {
            max=obj.ratings;
            highest=obj.name;
        }

        //checking further
        file_obj.read((char*)&obj,sizeof(obj));
    }

    file_obj.close();

    cout<<"Highest rating are : "<<highest;
    return 0;
}

int main()
{
    contestant obj;
    obj.input();
    obj.out_highest_rated();
}