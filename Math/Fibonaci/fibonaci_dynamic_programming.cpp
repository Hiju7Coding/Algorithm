#include<bits/stdc++.h>

int arr[50] = {0};
int fbnc(int n){
	if(arr[n] == 0) arr[n] = fbnc(n-1) + fbnc(n-2);
	return arr[n];
}
int main(){
	arr[0] = arr[1] = 1;
	for(int i = 2; i < 20; i++)
	std::cout<<fbnc(i)<<" ";
}