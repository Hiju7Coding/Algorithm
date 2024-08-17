#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int l,v,L,R;
		cin >> l >> v>> L>>R;
		cout<<l/v-(R/v - (L-1)/v)<<endl;
	}
}
//1066A