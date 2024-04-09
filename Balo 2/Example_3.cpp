#include<iostream>
#include<math.h>
#define maxn 100
#define maxm 100
using namespace std;
void Import(int t[maxn],int k[maxn],int &n,int &M){
	FILE *f=fopen("Example_3.INP","rt");
	fscanf(f,"%d",&n);
	fscanf(f,"%d",&M);
	for(int i=1;i<=2*n;i++){
		if(i%2==0) fscanf(f,"%d",&k[i/2]);
		if(i%2==1) fscanf(f,"%d",&t[(i+1)/2]);
	}
	fclose(f);
}
void Create_table(int t[maxn],int k[maxn],int f[maxm][maxn],int maxw,int n){
	for(int i=1;i<=n;i++){
	for(int j=1;j<=maxw;j++){
		if(i==1){
			if(j>=t[i]) f[i][j]=k[i];
			else f[i][j]=0;
		}
		else{
			if(j>=t[i]) f[i][j]=fmax(f[i-1][j-t[i]]+k[i],f[i-1][j]);
			else f[i][j]=f[i-1][j];
		}
	}
	}
	int M=maxw;
	FILE *f1=fopen("Example_3.OUT","wt");
	fprintf(f1,"%d \n",f[n][M]);
	for(int i=n;i>=1;i--){
		if(f[i][M]!=f[i-1][M]){
			fprintf(f1,"%d ",i);
			M=M-t[i];
		}
	}
    fclose(f1);
}
int main(){
	int t[maxn],k[maxn],f[maxm][maxn],maxw,n;
	Import(t,k,n,maxw);
	Create_table(t,k,f,maxw,n);
}