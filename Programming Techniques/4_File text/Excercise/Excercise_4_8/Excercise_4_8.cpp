#include<iostream>
#include<math.h>
#define maxm 500
#define maxn 500
using namespace std;
FILE *f1=fopen("4_8.OUT","wt");
void Import_table(int a[maxm][maxn],int &m,int &n){
	FILE *f=fopen("4_8.INP","rt");
	fscanf(f,"%d",&m);
	fscanf(f,"%d",&n);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    fscanf(f,"%d",&a[i][j]);
	fclose(f);
}
void Max_Minrow(int a[maxm][maxn],int m,int n){
	int max=INT_MIN,min=INT_MAX;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++) if(a[i][j]<min) min=a[i][j];
	if(min>max) max=min;
	min=INT_MAX;
    }
    fprintf(f1,"%d",max);
    fprintf(f1,"\n");
}
void Min_distance(int a[maxm][maxn],int m,int n){
	int min=INT_MAX,p,b,c,d,q;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		for(int h=i;h<m;h++){
		for(int k=j;k<n;k++){
			if(h!=i || k!=j){
			 q=abs(a[i][j]-a[h][k]);
		}
		if(q<min){
			min=q;
			p=i;
			b=j;
			c=h;
			d=k;
		}
		}
		}
	}
	}
	fprintf(f1,"%d %d %d %d %d",min,p+1,b+1,c+1,d+1);
	fprintf(f1,"\n");
}
void Create_newarray(int a[maxm][maxn],int p[maxm][maxn],int &m,int &n){
	int min=INT_MAX;
	for(int i=0;i<m;i++){
    for(int j=0;j<n;j++) if(a[i][j]< min) min=a[i][j];
    for(int k=0;k<n;k++) p[i][k]=a[i][k]*min;
    min=INT_MAX;
    }
}
void Sum_newarray(int a[maxm][maxn],int m,int n){
	int p[maxm][maxn],sum=0;
	Create_newarray(a,p,m,n);
	for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    sum+=p[i][j];
    fprintf(f1,"%d",sum);
    fprintf(f1,"\n");
}
int prime(int a){
	for(int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return a>1?1:0;
}
int createprime(int a){
	int h=a-1,k=a+1;
	if(a<2) return 2;
	while(!prime(h) && h!=0) h--;
	while(!prime(k)) k++;
	return k-a<a-h?k:h;
}
void Create_primearray(int a[maxm][maxn],int p[maxm][maxn],int &m,int &n){
	for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    	if(prime(a[i][j])) p[i][j]=a[i][j];
    	else p[i][j]=createprime(a[i][j]);
    }
	}
}
void Sum_primearray(int a[maxm][maxn],int m,int n){
	int p[maxm][maxn],sum=0;
	Create_primearray(a,p,m,n);
	for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    sum+=p[i][j];
    fprintf(f1,"%d",sum);
    fprintf(f1,"\n");
}
void horse(int a[maxm][maxn],int m,int n){
	int min=INT_MAX,max=INT_MIN,c,d;
	for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(max<a[i][j]){
	max=a[i][j];
	c=i;
	d=j;
    }
    }
	for(int k=0;k<m;k++) if(min>a[k][d]) min=a[k][d];
	if(min==max) fprintf(f1,"%d %d %d",min,c+1,d+1);
	max=INT_MIN;
	min=INT_MAX;
    }
}
int main(){
	int a[maxm][maxn],m,n;
	Import_table(a,m,n);
	Max_Minrow(a,m,n);
	Min_distance(a,m,n);
	Sum_newarray(a,m,n);
	Sum_primearray(a,m,n);
	horse(a,m,n);
	fclose(f1);
}