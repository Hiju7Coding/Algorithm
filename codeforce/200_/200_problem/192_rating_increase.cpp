#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int x,f=1;
		cin>>x;
		for(int i=10;x/i>0;i*=10){
			if(x%i>x/i && x%i>=i/10){
				f=0;
				cout<<x/i<<' '<<x%i<<endl;
				break;
			}
		}
		if(f) cout<<-1<<endl;
	}
	return 0;
}
//1913A