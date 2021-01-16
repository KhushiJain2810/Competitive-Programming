#include<bits/stdc++.h>
using namespace std;

#define MAX 10001
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
    int l, r, c = 0;
    cin >> l >> r;
    sieve();
    for(int i = l; i <= r; i++)
        if(prime[i])
            cout << i << " ";

    return 0;
}
