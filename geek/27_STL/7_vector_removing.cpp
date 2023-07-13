#include<bits\stdc++.h>
using namespace std;

void print(vector<pair<int,string>> & vec)
{
    cout<<"[";
    for(int i=0;i<vec.size();i++)
    {
        cout<<"{" << vec[i].first << "," << vec[i].second << "}";
        if(i<vec.size()-1)
        cout<<", ";
    }
    cout<<"]"<<endl;
}

int main(void)
{
    vector<pair<int,string>> x={ {1,"Apple"},
                                 {2,"banana"},
                                 {3,"Cheery"},
                                 {4,"Guava"}};
    x.erase(x.begin());
    cout<<"\nRemove element at index 0 : ";
    print(x);

    x.erase(x.begin(),x.begin()+2);
    cout<<"\nRemove elements at index 0 and 1 : ";
    print(x);

    x.clear();
    cout<<"\nClear the vector : ";
    print(x);

    return 0;
}