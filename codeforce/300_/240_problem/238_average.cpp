#include <iostream>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<n;i++){
		    cout<<n+1<<" ";
		}
		int res = (n&1)?n+1:1;
		cout<<res<<endl;
	}
	return 0;
}
//1758B