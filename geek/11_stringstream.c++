#include<iostream>
using namespace std;
#include<string>
#include<sstream>

int count_words(string str)
{
    //count words in a string

    //used for breaking words
    stringstream s(str);
    string words;

    int count=0;
    while(s>>words)
    count++;

    return count;
}

#include<bits/stdc++.h>

void print_freq(string str)
{
    // to count frequency of words

    //to map word with its frequency
    map<string,int>FW;

    stringstream ss(str);
    string word;

    while(ss>>word)
     FW[word]++;

    map<string,int>::iterator m;
    for(m=FW.begin();m!=FW.end();m++)
     cout<< m->first << "-> " << m->second<< "\n";
}

int main()
{
    string s="hello hi how are you "
              "nice to meet you "
              "hi hi to check";
    cout<<"Number of words are : "<<count_words(s);
    cout<<endl<<"frequency of words are : ";
    print_freq(s);

    return 0;
}