#include<iostream>
#define maxn 200
#define maxm 200
using namespace std;
void Import(long t[maxn],long &n,long &max){
	FILE *f=fopen("Example_2.INP","rt");
	fscanf(f,"%d",&n);
	fscanf(f,"%d",&max);
	for(int i=1;i<=n;i++)
	fscanf(f,"%d",&t[i]);
	fclose(f);
}
int fmax(int a,int b){
	if(a>b) return a;
	return b;
}
void Create_table(long t[maxn],long q[maxm][maxn],long max,long n){
	for(int i=1;i<=n;i++){
	for(int j=1;j<=max;j++){
	    if(i==1){
	    	if(j>=t[i]) q[i][j]=t[i];
	    	else q[i][j]=0;
		}
		else{
		if(j>=t[i]) q[i][j]=fmax(q[i-1][j-t[i]]+t[i],q[i-1][j]);
		else q[i][j]=q[i-1][j];
	    }
	}
	}
	long M=max;
	FILE *f=fopen("Example_2.OUT","wt");
	fprintf(f,"%d \n",q[n][max]);
	for(int i=n;i>=1;i--){
	if(q[i][M]!=q[i-1][M]){
		fprintf(f,"%d ",i);
		M=M-t[i];
	}
	}
	fprintf(f,"\n");
    
}
int main(){
	long t[maxn],q[maxm][maxn],n,max;
	Import(t,n,max);
	Create_table(t,q,max,n);
}