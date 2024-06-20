#include <bits/stdc++.h>

/*
	liet ke so nguyen to nho hon hoac bang n ( n < 10^7 )
*/

using namespace std;


const int maxn = 10000001;

bool nt[maxn];

//nt[i] = true;
void sang(){
	for(int i = 0; i <= maxn-1;i++){
		nt[i] = true;
	}
	// memset( nt, true, sizeof(nt));
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(maxn-1);i++){
		if(nt[i]){
			for(int j = i * i; j <= maxn-1; j+=i){
				nt[j] = false;
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	sang();

	for(int i = 0; i <= 100; i++){
		if(nt[i]) cout<<i<<" ";
	}
	return 0;
}