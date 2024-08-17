#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	char c;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a1=n,a2=0,b1=m,b2=0;
		for(int a=1;a<=n;a++){
			for(int b=1;b<=m;b++){
				cin>>c;
				if(c=='#'){
					if(a<a1)a1=a;if(a>a2)a2=a;
					if(b<b1)b1=b;if(b>b2)b2=b;
				}
			}
		}
		cout<<(a1+a2)/2<<' '<<(b1+b2)/2<<'\n';
	}
}
//1985D