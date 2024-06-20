#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		char c;
		int ptop = 0;
		string a[2];
		for(int i = 1;i <= 2*n - 2;i++){
			string str;cin >> str;
			if(str.size() == (n + 1) / 2)
				a[ptop++] = str;
		}
		reverse(a[0].begin(),a[0].end());
		if(a[0] != a[1])
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
}
//1794A