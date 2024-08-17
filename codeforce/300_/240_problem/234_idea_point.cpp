#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
		int n,l,r, a=0, b=0, k; cin>>n>>k;
		while (n--) {
			cin>>l>>r;
			if (l==k) a=1;
			if(r==k) b=1;
		}
		cout<<(a&b ? "YES\n" : "NO\n");
	}
}
//1795B