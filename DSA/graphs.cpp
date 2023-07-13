#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>

class graph
{
    private:
    unordered_map<string,unordered_set<string>> adjList;

    public:
    void printGraph()
    {
        unordered_map<string, unordered_set<string>>::iterator kvpair = adjList.begin();
        while(kvpair != adjList.end())
        {
            cout<< kvpair->first << " : [ ";
            unordered_set<string>::iterator edge = kvpair->second.begin();

            while(edge != kvpair->second.end())
            {
                cout<< edge->data() << " ";
                edge++;
            }
            cout << "]"<<endl;
            kvpair++;
        }
    }

    bool addVertex(string vertex)
    {
        if(adjList.count(vertex) == 0)
        {
            adjList[vertex];
            return true;
        }
        return false;
    }

    bool addEdge(string vertex1 , string vertex2)
    {
        if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
        {
            adjList.at(vertex1).insert(vertex2);
            adjList.at(vertex2).insert(vertex1);
            return true;
        }
        return false;
    }

    bool removeEdge(string vertex1, string vertex2)
    {
        if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
        {
            adjList.at(vertex1).erase(vertex2);
            adjList.at(vertex2).erase(vertex1);
            return true;
        }
        return false;
    }

    bool removeVertex(string vertex)
    {
        if(adjList.count(vertex) == 0)
            return false;
        for( auto othervertex : adjList.at(vertex))
            adjList.at(othervertex).erase(vertex);

        adjList.erase(vertex);
        return true;
    }
};

int main(void)
{
    graph* mygraph = new graph();

    mygraph->addVertex("A");
    mygraph->addVertex("B");
    mygraph->addVertex("C");
    mygraph->addVertex("D");

    cout<<"Graph before addEdge : \n";
    mygraph->printGraph();

    mygraph->addEdge("A", "B");
    mygraph->addEdge("B", "C");
    mygraph->addEdge("A", "C");
    mygraph->addEdge("C", "D");
    mygraph->addEdge("D", "A");
    mygraph->addEdge("B", "D");

    cout << "\n\nGraph after addEdge : \n";
    mygraph->printGraph();

    mygraph->removeEdge("A", "C");

    cout << "\n\nGraph after removeEdge : \n";
    mygraph->printGraph();

    mygraph->removeVertex("D");

    cout << "\n\nGraph after removeVertex : \n";
    mygraph->printGraph();

    return 0;
}