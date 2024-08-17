#include <bits/stdc++.h>
using namespace std;
int n, a, b[28];
char c;
int main()
{
	cin >> n >> a;
	while (n--)
	{
		cin >> c;
		b[c - 'a']++;
		if (b[c - 'a'] > a)
		{  cout << "NO";	return 0;	}
	}
	cout << "YES";
}
//841A