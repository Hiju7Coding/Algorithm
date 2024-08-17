#include <bits/stdc++.h>
using namespace std;
int n,a,b,k,l,w;
int main(){
	cin>>a>>b>>k>>l>>n;
	if(k<l)swap(k,l),swap(a,b);
	cout<<max(n-a*(k-1)-b*(l-1),0)<<" ";
	w=min(b,n/l);
	cout<<w+min(a,(n-w*l)/k);
}
//1215A