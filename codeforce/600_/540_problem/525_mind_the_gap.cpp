#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, s;cin>>n>>s;
	int time=0;
	for(int i=0;i<n;++i){
		int h, m;cin>>h>>m;
		int ctime=h*60+m;
		if(ctime-time>=s+1){
			cout<<time/60<<" "<<time%60<<endl;
			return 0;
		}
		else time=ctime+s+1;
	}
 
	cout<<time/60<<" "<<time%60<<endl;
	// your code goes here
	return 0;
}
//967A