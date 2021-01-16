#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    map <char, int> m;
    int c = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
            m[s[i]]++;
        else
        {
            if(m[s[i]+32])
                m[s[i]+32]--;
            else
                c++;
        }
    }
    cout << c;

    return 0;
}
