#include<bits/stdc++.h>
using namespace std;

string s, t;

int main(){
	cin >> s;
	while(s.back()=='0'){
		s.pop_back();
	}
	t = s;
	reverse(t.begin(),t.end());
	printf(s==t ? "YES\n" : "NO\n");
	return 0;
}
//863A