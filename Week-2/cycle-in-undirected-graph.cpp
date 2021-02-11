// Another method-
// count number of nodes and edges in each component
// if(no of edges >= no of nodes)
//     Return Cyclic

#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int>v[], int x, int y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}

bool isCyclic(int current, vector<int>v[], vector<bool>&visited, int parent)
{
    visited[current] = true;
    for(int u : v[current])
    {
        if(!visited[u])
        {
            if(isCyclic(u, v, visited, current))
                return true;
        }
        else if(u != parent)
            return true;
    }
    return false;
}

int main()
{
    int n = 5;
    vector<int>v[n];

    //addEdge(v, 0, 1);
    //addEdge(v, 0, 2);
    //addEdge(v, 1, 2);
    //addEdge(v, 2, 0);
    //addEdge(v, 2, 3);
    //addEdge(v, 3, 3);

    addEdge(v, 2, 0);
    addEdge(v, 2, 3);
    addEdge(v, 0, 1);
    addEdge(v, 3, 4);
    addEdge(v, 4, 2);

    vector <bool> visited(n);
    isCyclic(2, v, visited, -1) ? cout << "Yes" : cout << "No";
    return 0;
}
