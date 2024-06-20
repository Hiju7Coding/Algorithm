#include <iostream> 
using namespace std;
int main() 
{
	int t,i,c=0;
	string a;
	cin>>t;
	cin>>a;
	for(i=0;i<t-1;i++){
		if(a[i]==a[t-1]) c++;
	}
	if(c!=1) cout<<t-1;
	else if(t==4&&a[0]==a[1]) cout<<2;
	else if(a[0]!=a[t-1]&&t!=4) cout<<1;
	else cout<<-1;
}
//1912L