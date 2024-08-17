#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c = 0; 
  cin >> a >> b;
	while (a < b)
	{
		if (b % (a * 3) == 0) a *= 3;
		else a *= 2;
		c++;
	}
	cout << (a == b ? c : -1);
}
//1141A