#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> t(n);
    vector <int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    int d;
    cin >> d;
    int q;
    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        t[l] += d;
        if(r + 1 < n)
            t[r + 1] -= d;
    }
    for(int i = 1; i < n; i++)
        t[i] += t[i-1];
    for(int i = 0; i < n; i++)
        v[i] += t[i];

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}
/*
6
3 5 4 8 6 1
2
5
0 3
4 5
1 4
0 1
2 5
*/
