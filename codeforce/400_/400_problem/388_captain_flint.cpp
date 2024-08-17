#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int x = (n+3)/4;
		string str(n-x, '9');
		str += string(x, '8');
		cout << str << endl;
	}
}
 //1388B