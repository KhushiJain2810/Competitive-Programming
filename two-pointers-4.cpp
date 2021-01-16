#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = n-1;
    long long int sum1 = v[i], sum2 = 0, sum3 = v[j], m = 0;

    while(i < j)
    {
        if(sum1 == sum3)
        {
            m = sum1;
            i++;
            j--;
            if(i < j)
            {
                sum1 += v[i];
                sum3 += v[j];
            }
        }
        else if(sum1 < sum3)
        {
            i++;
            if(i < j)
                sum1 += v[i];
        }
        else
        {
            j--;
            if(i < j)
                sum3 += v[j];
        }
    }
    cout << m;
    return 0;
}
