#include <bits/stdc++.h>

/*
	liet ke so nguyen to nho hon hoac bang n ( n < 10^7 )
*/

using namespace std;


const int maxn = 10000000;

bool nt[maxn+1];

//nt[i] = true;
void sang(){
	memset( nt, true, sizeof(nt));
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(maxn);i++){
		if(nt[i]){
			for(int j = i * i; j <= maxn; j+=i){
				nt[j] = false;
			}
		}
	}
}

int main(){
	sang();
	// in ra so nguyen to nho hon 100
	for(int i = 0; i <= 100; i++){
		if(nt[i]) cout<<i<<" ";
	}
	// int ra cac so nguyen to nam trong khoang m,n
	cout<<endl;
	for(int i = 56; i <= 100; i++){
		if(nt[i]) cout<<i<<" ";
	}
	return 0;
}