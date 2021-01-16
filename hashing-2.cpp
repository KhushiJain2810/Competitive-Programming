#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int m = INT_MIN;
	char c;
	vector<int>v(256);
	for(int i = 0; i < s.size(); i++)
		v[s[i]]++;
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i] > m)
		{
			m = v[i];
			c = i;
		}
	}
	cout << c << " " << m;
	return 0;
}
