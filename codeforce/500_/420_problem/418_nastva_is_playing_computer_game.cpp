#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
	cin>>n>>m;
	cout<<3*n + min(m,n-m+1)-1;
}
//1136B