#include <bits/stdc++.h>
using namespace std;
int l,r,d,q;
int main(){
	for(cin>>q;q--;)
		cin>>l>>r>>d,
		cout<<(d<l?d:((r+d)/d)*d)<<endl;
}
//1101A