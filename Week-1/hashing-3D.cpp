#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int c=0;
        set<pair<int,int>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if(s.find({i,j})!=s.end()||s.find({j,i})!=s.end())
                    continue;
                float sum=v[i]+v[j];

                s.insert({i,j});
                float x=sqrt(sum);
                float y=cbrt(sum);
                if( !(x-floor(x)) || !(y-floor(y)) )
                    c++;

                if(x==floor(x)||y==floor(y))
                    cout <<i<<" "<<j<<" "<<"sum: "<<sum<<" "<< x << " " << floor(x) << " " << y << " " << floor(y) << endl;
            }
        }
        cout<<c<<" ";
    }

    return 0;
}

