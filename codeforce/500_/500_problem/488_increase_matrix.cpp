#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,m,sum=0;
	cin>> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>> a[i][j];}
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			if(a[i][j]==0)
				a[i][j]=min(a[i][j+1],a[i+1][j])-1;
			if( (a[i][j]<=a[i][j-1] && j>=1) || (a[i][j]<=a[i-1][j] && i>=1) ){
	    		cout<<-1<<endl;
	    		return 0;}
			sum+=a[i][j];}}
	cout<< sum <<endl;
	return 0;
}
//1231C