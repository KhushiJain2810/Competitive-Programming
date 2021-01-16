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
        int i = 0;
        int j = n - 1;
        while(i <= j)
        {
            cout << v[i] << " ";
            if(i != j)
                cout << v[j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }
    return 0;
}


/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<int>res;
        int i = 0;
        int j = n-1;
        while(i <= j)
        {
            res.push_back(v[i]);
            if(i!=j)
                res.push_back(v[j]);
            i++;
            j--;
        }
        for(auto c:res)
            cout << c << " ";
        cout << endl;
    }

    return 0;
}*/
