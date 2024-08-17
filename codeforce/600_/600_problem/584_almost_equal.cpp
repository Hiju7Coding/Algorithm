#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n;
	cin >> n;
	if(n%2==0){
		cout << "NO";
	} else{
		cout << "YES" << endl;
		for(int i=0; i<n*2; i++){
			cout << i%n*2 + i%2 + 1 << " ";
		}
	}
}
//1205A