#include<iostream>
#include<math.h>
#define maxm 200
#define maxn 200
using namespace std;
void Import_table(int a[maxm][maxn],int &m,int &n){
	FILE *f=fopen("4_4.INP","rt");
	fscanf(f,"%d",&m);fscanf(f,"%d",&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	fscanf(f,"%d",&a[i][j]);
	fclose(f);
}
FILE *f1=fopen("4_4.OUT","wt");
void Max(int a[maxm][maxn],int m,int n){
	int max=0,count=0,p,q;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(a[i][j]>max){
		max=a[i][j];
		p=i;
		q=j;
	}
}
}
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(a[i][j]==max) count++;
	fprintf(f1,"%d %d %d",max,p,q);
	fprintf(f1,"\n%d\n",count);
}
void count_column(int a[maxm][maxn],int m,int n){
	unsigned long long count=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) count+=a[i][j];
	fprintf(f1,"%llu ",count);
	count=0;
    }
}
void count_row(int a[maxm][maxn],int m,int n){
	fprintf(f1,"\n");
	unsigned long long count=0;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++) count+=a[j][i];
	fprintf(f1,"%llu ",count);
	count=0;
    }
}
int prime(int n){
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return n>1?1:0;
}
void count_max(int a[maxm][maxn],int m,int n){
	int count=0,max=0;
	for(int i=0;i<m-1;i++){
	for(int j=0;j<n-1;j++){
	if(prime(a[i][j]) && prime(a[i+1][j]) && prime(a[i][j+1]) && prime(a[i+1][j+1])) 
	count+=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
	}
	if(count>max) max=count;
    count=0;
	}
	fprintf(f1,"\n%d",max);
}
void count_prime(int a[maxm][maxn],int m,int n){
	long count=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(prime(a[i][j])) count++;
	}
    }
    fprintf(f1,"\n%ld ",count);
}
int perfect(int n){
	int k=0;
	for(int tam=n;tam>0;tam/=10) k=k*10+tam%10;
	if(k!=n) return 0;
	else return 1;
}
void count_perfect(int a[maxm][maxn],int m,int n){
	long count=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(perfect(a[i][j])) count++;
	}
    }
    fprintf(f1,"\n%ld ",count);
}

int main(){
	int a[maxm][maxn],m,n;
	Import_table(a,m,n);
	Max(a,m,n);
	count_column(a,m,n);
	count_row(a,m,n);
	count_max(a,m,n);
	count_prime(a,m,n);
	count_perfect(a,m,n);
}