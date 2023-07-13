// there are 2 arrays and we have to find if they have any element in common

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

bool itemIncommonUsingVector(vector<int> vect1, vector<int> vect2)
{
    for(auto i :vect1)
    {
        for (auto j :vect2)
        {
            if (i==j) 
                return true;
        }
    }
    return false;
}

bool itemIncommonUsingHash(vector<int> vect1, vector<int> vect2)
{
    unordered_map<int,bool> mymap;
    for (auto i : vect1)
    {
        mymap.insert({i,true});
    }

    for(auto j:vect2)
    {
        if(mymap[j])
            return true;
    }
    return false;
}

int main(void)
{
    vector<int> vect1 {1,3,5};
    vector<int> vect2 {2,4,5};

    // vector method gives output in O(n^2)
    cout<<"Output using vectors : "<<itemIncommonUsingVector(vect1,vect2);

    // hash method gives solution in O(n)
    cout<<endl<<"Output using Hash : "<<itemIncommonUsingHash(vect1,vect2);

    return 0;
}