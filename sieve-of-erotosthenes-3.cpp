/*
https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/
*/

#include<bits/stdc++.h>

using namespace std;

#define MAX 1000001
vector <bool> prime(MAX, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for(int i = 2; i <= sqrt(MAX); i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j < MAX; j += i)
                prime[j] = false;
        }
    }
}

int main()
{
    sieve();
    int count = 0;
    vector <int> v(MAX);
    for(int i = 2; i <= MAX; i++)
    {
        if(prime[i])
            count++;
        v[i] = prime[count];
    }
    for(int i = 1; i < v.size(); i++)
        v[i] += v[i-1];
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << v[r] - v[l-1] << endl;
    }
    return 0;
}
