#include<bits/stdc++.h>

int arr[50] = {0};
int fbnc(int n){
	if(arr[n] == 0) arr[n] = fbnc(n - 1) + fbnc(n -2);
	return arr[n];
}
int fbnc2(int n){
	int f1 = arr[n-1] ? arr[n-1] : fbnc2(n-1);
	int f2 = arr[n-2] ? arr[n-2] : fbnc2(n-2);
	return arr[n] = f1 + f2;
}
int main(){
	arr[0] = arr[1] = 1;
	for(int i  = 2; i < 20; i++)
	std::cout<<fbnc(i)<<" ";
}