#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
        v[i]+=v[i-1];

    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        cin>>i>>j;
        if(i==0)
            cout<<v[j]<<endl;
        else
            cout<<v[j]-v[i-1]<<endl;

    }

    return 0;
}
