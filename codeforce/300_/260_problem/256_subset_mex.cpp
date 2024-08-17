#include <bits\stdc++.h>
using namespace std;
int t,n,i,j,x,a[102];
int main(){
cin >>t;
while(t--){
	cin >>n;
	for(i=0;i<=100;i++)a[i]=0;
	while(n--)cin >>x,a[x]++;
	for(i=0;a[i]>1;i++);
	for(j=i;a[j]>0;j++);
	cout<<(j+i)<<"\n";
	
}
return 0;
}
//1406A