 #include<iostream>
#include<math.h>
#define maxm 200
#define maxn 200
using namespace std;
int prime(int n){
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return n>1?1:0;
}
void Import_table(int a[maxm][maxn],int &m,int &n){
	FILE *f=fopen("4_3.INP","rt");
	fscanf(f,"%d",&m);fscanf(f,"%d",&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	fscanf(f,"%d",&a[i][j]);
	fclose(f);
}
int Check_prime(int a[maxm][maxn],int m,int n){
	int d=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(prime(a[i][j])) d++;
	return d;
}
int max_sumrow(int a[maxm][maxn],int m,int n){
	int sum=0,max=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	sum+=a[i][j];	
	}
	if(sum>max) max=sum;
	sum=0;
	}
    return max;
}
int min_sumcolumn(int a[maxm][maxn],int m,int n){
	int sum=0,min;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	sum+=a[j][i];	
	}
	if(sum<min) min=sum;
	sum=0;
	}
    return min;
}
int main(){
	int a[maxm][maxn],m,n;
    Import_table(a,m,n);
    FILE *f1=fopen("4_3.OUT","wt");
    fprintf(f1,"%d",Check_prime(a,m,n));
    fprintf(f1,"\n%d",max_sumrow(a,m,n));
    fprintf(f1,"\n%d",min_sumcolumn(a,m,n));
    fclose(f1);
}
