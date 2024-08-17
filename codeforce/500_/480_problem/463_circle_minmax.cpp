#include <bits/stdc++.h>
using namespace std;
 
int t;
int n;
int a[100020];
 
void query()
{
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	if(n%2) {cout << "NO" << endl; return;}
	sort(a,a+n);
	for(int i=1;i<n/2;i++)
		if(a[i]==a[i+n/2-1]) {cout << "NO" << endl; return;}
	cout << "YES" << endl;
	for(int i = 0;i<n/2;i++)
		cout << a[i] << " " << a[i+n/2] << " ";
	cout << endl;
}
 
int main()
{
	cin >> t;
	while(t--) query();
}
//1685A