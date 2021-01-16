#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum=0;
            for(int k = i; k <= j; k++)
                {cout << v[k] << " ";
                sum+=v[k];}
            cout<<"sum: "<<sum<<" ";
            cout << endl;

        }
    }
    return 0;
}

