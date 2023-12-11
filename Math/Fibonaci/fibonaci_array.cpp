#include<bits/stdc++.h>

int arr[50] = {0};
int fbnc(int n){
	arr[0] = arr[1] = 1;
	for(int i = 2; i <= n; i++)
		arr[i] = arr[i-1] + arr[i-2];
	return arr[n];
}
int fbnc2(int n){
	int f1 = 1; f2 = 1; f3 = 0;
	for(int i  = 2; i <= n; i++){
		f3 = f2+f1;
		f1=f2;
		f2=f3;
	}
	return f3;
}
int main(){
	for(int i = 2; i < 20; i++)
	std::cout<<fbnc(i)<<" ";
}