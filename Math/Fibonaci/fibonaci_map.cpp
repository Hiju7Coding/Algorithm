#include<bits/stdc++.h>

map<long, long> F;

long fbnc(long n){
	if(F.count(n)) return F[n];
	long k = n/2;
	if(n%2 == 0)
		return F[n] = (fbnc(k)*fbnc(k) + fbnc(k-1)*fbnc(k-1));
	else
		return F[n] = (fbnc(k)*fbnc(k+1) + fbnc(k-1)*fbnc(k));
}
int main(){
	F[0] = F[1] = 1;
	for(int i = 0; i < 20l i++)
	cout<<(i == 0 ? 0 : fbnc(n-1))<<" ";
}