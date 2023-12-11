#include<bits/stdc++.h>

int fbnc(int n){
	if(n == 0 || n == 1) return 1;
	return fbnc(n-1) + fbnc(n-2);
}
int main(){
	for(int i = 2; i < 20; i++)
	std::cout<<fbnc(i)<<" ";
}