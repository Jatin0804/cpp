#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void stringstr()
{
    // tokenizing using stringsstream

    string line = "geeks for geeks is a must try";
    vector<string> tokens;
    stringstream check1(line);
    string intermediate;

    while (getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
    for (int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << "\n";
    }
    return ;
}

#include<stdio.h>
#include<string.h>

void use_strtok()
{
    //using strtok()
    char str[]="string-for-string";
    //return first token
    char *token=strtok(str,"-");

    while(token!=NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL,"-");
    }
    return;
}

void strtok2()
{
    char gfg[100]="gfg - for - gfg - contribute";
    
    const char s[4]="-";
    char* tok;
    //get first token
    tok=strtok(gfg,s);

    while(tok!=0)
    {
        printf("%s\n",tok);
        tok=strtok(0,s);
    }

    return;
}

/*void str_r()
{
    char str[]="Geels for geels";
    char *token;
    char *rest=str;

    while((token= strtok_r(rest," ",&rest)))
        printf("%s\n",token);

    return;
}*/

/*#include<regex>
vector<string> tokenize(const string str,const regex re)
{
    std::regex_token_iterator it{str.begin(),str.end(),re,-1};
    
    vector<string> tokenized{it,{}};

    tokenized.erase(remove_if(tokenized.begin(),
                              tokenized.end(),
                              [](string const& s)
                              {return s.size()==0;}),
                              tokenized.end());

    return tokenized;
}

void use_regex()
{
    const string str="Break string "
                    "a,spaces,and,commas";
    const regex re(R"([\s|,]+)");

    const vector<string> tokenized=tokenize(str,re);

    for(string token:tokenized)
       cout<<token<<endl;
}*/

int main(void)
{
    cout<<endl;
    stringstr();
    cout<<endl;
    use_strtok();
    cout<<endl;
    strtok2();
    cout<<endl;
    //str_r();
    cout<<endl;
    //use_regex();

    return 0;
}