#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	string s,c;
	map <string,string> a;
	while(m--)
	{
		cin >> s >> c;
		a[c + ";"] = s;
	}
	while(n--)
	{
		cin >> s >> c;
		cout << s << " " << c << " #" << a[c] << endl;
	}
}
//918B