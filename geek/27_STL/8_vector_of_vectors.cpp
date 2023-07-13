#include<bits/stdc++.h>
using namespace std;

void printvector(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j< m ; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(void)
{
    vector<vector<int>> vec;
    cout<< "N : "<<vec.size()<<endl;

    vec.resize(4, vector<int> (5,-1));

    cout<<"N : "<<vec.size()<<" M : "<<vec[0].size()<<endl;
    printvector(vec);

    return 0;
}