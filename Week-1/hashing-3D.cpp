#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector <int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        unordered_map <int, bool> m;
        int i = 1;
        while(i*i <= 1000)
        {
            m[i*i] = true;;
            m[i*i*i] = true;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {

            }
        }
        cout<<c<<" ";
    }

    return 0;
}

