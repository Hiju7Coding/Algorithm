#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int maxi = -1000000;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		int t = sqrt(x);
		if(t*t!=x)maxi = max(maxi,x);
	}
	cout << maxi << endl;
	return 0;
}
//914A