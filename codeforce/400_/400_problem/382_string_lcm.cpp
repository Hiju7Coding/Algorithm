#include<bits/stdc++.h>
using namespace std;
int t;string a,b,p,q;
int main(){
	for(cin>>t;t;t--){
		cin>>a>>b;p=a;q=b;
		while(1){
			if(p.length()==q.length()){
				if(p==q)cout<<p<<endl;
				else cout<<-1<<endl;
				break;
			}
			if(p.length()<q.length())p+=a;
			else q+=b;
		}
	}
	return 0;
}
//1473B