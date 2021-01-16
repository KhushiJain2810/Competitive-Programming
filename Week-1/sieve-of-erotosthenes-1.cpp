// PRIME SIEVE OF ERATOSTHENES O(nloglogn)
#include<bits/stdc++.h>

using namespace std;

#define MAX 90000000
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
    int n = 15;
    sieve();
    vector<int>primeBag;
    for(int i = 2; i <= MAX; i++)
    {
        if(prime[i])
            primeBag.push_back(i);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int k;
        cin >> k;
        cout << primeBag[k-1] << endl;
    }
    return 0;
}
