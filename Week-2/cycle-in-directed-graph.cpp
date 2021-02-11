#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int>v[], int x, int y)
{
    v[x].push_back(y);
}

bool dfs(int current, set<int>&white, set<int>&grey, set<int>&black, vector<int>v[])
{
    white.erase(white.find(current));  // If exploring an element, move from white to grey
    grey.insert(current);
    for(auto it = v[current].begin(); it != v[current].end(); it++)  // explore its neighbour one by one
    {
        int neighbour = *it;
        if(black.find(neighbour) != black.end())
            continue;  // In black means completely explored
        if(grey.find(neighbour) != grey.end())
            return true;  // In grey means cycle is found
        if(dfs(neighbour, white, grey, black, v))
            return true;  // If not in black and grey means it should be explored
    }
    grey.erase(grey.find(current));  // No cycle found including current so move current from grey to black
    black.insert(current);
    return false;  // and return false
}

bool isCyclic(vector<int>v[], int n)
{
    set<int>white;
    set<int>grey;
    set<int>black;
    for(int i = 0; i < n; i++)
        white.insert(i);
    while(white.size())
    {
        auto it = white.begin();
        if(dfs(*it, white, grey, black, v))
            return true;
    }
    return false;
}

int main()
{
    int n = 5;
    vector<int>v[n];

    /*
    addEdge(v, 0, 1);
    addEdge(v, 0, 2);
    addEdge(v, 1, 2);
    addEdge(v, 2, 0);
    addEdge(v, 2, 3);
    addEdge(v, 3, 3);
    */

    addEdge(v, 2, 0);
    addEdge(v, 2, 3);
    addEdge(v, 0, 1);
    addEdge(v, 3, 4);
    addEdge(v, 4, 2);

    if(isCyclic(v, n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
