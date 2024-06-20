#include <iostream>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;cin>>n;
		long long sum=0;
		for(int i=0;i<n;i++)
			cin>>a,a<2?sum--:sum+=a-1;
		cout<<((sum>-1 && n>1)?"YES\n":"NO\n");
	}
}
//1856B