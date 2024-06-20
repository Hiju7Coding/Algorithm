#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
cin >> t;
while(t--){
 
		int n;
	cin >> n;
		int c,d;
		cin >> c;
		for(int i=1;i<n;i++)
		{
			cin >> d;
			c=__gcd(c,d);
		}
	cout << d/c << endl;
}
}
//1764B