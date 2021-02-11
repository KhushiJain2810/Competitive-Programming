#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int>v[], int x, int y)
{
    v[x].push_back(y);
}

void print(vector<int>v[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << i << " -> ";
        for(int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}


void topological_sort(vector<int>v[], vector<bool>&visited, stack<int>&s, int i)
{
    visited[i] = true;
    for(auto u: v[i])
    {
        if(!visited[u])
            topological_sort(v, visited, s, u);
    }
    s.push(i);
}

int main()
{
    int N = 6;
    vector<int>v[N];
    addEdge(v, 5, 2);
    addEdge(v, 5, 0);
    addEdge(v, 4, 0);
    addEdge(v, 4, 1);
    addEdge(v, 2, 3);
    addEdge(v, 3, 1);
    //print(v, N);

    vector<bool>visited(N, false);
    stack<int>s;
    for(int i = 0; i < N; i++)
    {
        if(!visited[i])
            topological_sort(v, visited, s, i);
    }

    vector<int>sorted;
    while(!s.empty())
    {
        sorted.push_back(s.top());
        s.pop();
    }
    for(auto i: sorted)
        cout << i << " ";
    return 0;
}
