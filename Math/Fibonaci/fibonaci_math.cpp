#include<bits/stdc++.h>

int fbnc(int n){
	double phi = (1 + sqrt(5)) /2;
	return round(pow(phi, n)) / sqrt(5));
}
int main(){
	for(int i = 2; i < 20; i++)
		std::cout<<fbnc(i)<<" ";
}