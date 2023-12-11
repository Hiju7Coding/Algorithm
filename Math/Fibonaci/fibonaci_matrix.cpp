#include<bits/stdc++.h>

int fbnc(int n){
	int M[2][2] = {{1, 1}, {1, 0}};
	int F[2][2] = {{1, 1}, {1, 0}};
	for(int i = 2; i <= n; i++){
		int s1 = F[0][0] * M[0][0] + F[0][1] * M[1][0];
		int s2 = F[0][0] * M[0][1] + F[0][1] * M[1][1];
		int s3 = F[1][0] * M[0][0] + F[1][1] * M[1][0];
		int s4 = F[1][0] * M[0][1] + F[1][1] * M[1][1];
		F[0][0] = s1;
		F[0][1] = s2;
		F[1][0] = s3;
		F[1][1] = s4;
	}
	return F[0][0];
}
int main(){
	for(int i = 2; i < 20; i++)
	std::cout<<fbnc(i)<<" ";
}