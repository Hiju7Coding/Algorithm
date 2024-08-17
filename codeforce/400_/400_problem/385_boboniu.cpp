#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,g,b,w;
	cin>> n;
	while( n-- ){
		cin>> r >> g >> b >> w;
		int s= (r%2)+(g%2)+(b%2)+(w%2);
		cout<< ((s<=1 || r*g*b!=0) && s!=2 ? "YES" : "NO") <<endl;
	}
	return 0;
}
//1395A