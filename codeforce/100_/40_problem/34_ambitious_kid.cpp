#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n, x, ans=1e9;
	cin >> n;
	while(n--) cin >> x, ans=min(ans,abs(x));
	cout << ans;
}