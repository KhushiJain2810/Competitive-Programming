#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << v[0] << " ";
    for(int i = 1; i < n; i++)
    {
        v[i] += v[i-1];
        cout << v[i] << " ";
    }
    return 0;
}

