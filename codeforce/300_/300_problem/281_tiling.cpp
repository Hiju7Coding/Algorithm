#include <bits/stdc++.h>

using namespace std;

#define getout {cout<<"NO";return 0;}

int main()
{
	int n;
	cin >> n;
	char a[n][n];
	for (int i=0;i<n;i++)	cin>>a[i];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (a[i][j]=='.')
			{
				if (a[i+1][j-1]=='.'&&a[i+1][j]=='.'&&a[i+1][j+1]=='.'&&a[i+2][j]=='.'&&j!=0&&j!=n-1&&i!=n-1)
				{
					a[i+1][j-1]='#';a[i+1][j]='#';a[i+1][j+1]='#';a[i+2][j]='#';
				}
				else	getout;
			}
		}
	}
	cout<<"YES";
	return 0;
}
//1150B