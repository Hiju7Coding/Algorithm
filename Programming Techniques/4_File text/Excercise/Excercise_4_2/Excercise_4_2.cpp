#include<iostream>
#define maxn 100
using namespace std;
int main(){
	int n,m,p=1,max=0,count=0,h=0,a[maxn];
	FILE *f=fopen("4_2.INP","rt");
	FILE *f1=fopen("4_2.OUT","wt");
	fscanf(f,"%d",&n);
	fscanf(f,"%d",&m);
	for(int i=1;i<=n;i++){
		fscanf(f,"%d",&a[i]);
		if(a[i]>max) max=a[i];
		if(a[i] >= a[i-1] || i==1) count++;
		else{
			if(count > p) p=count;
			count=1;
		}
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(a[i]+a[j]==m) h++;
	fprintf(f1,"%d \n",max);
	fprintf(f1,"%d \n",p);
	fprintf(f1,"%d \n",h/2);
	fprintf(f1,"%d \n",a[n/2]);
	fclose(f);
	fclose(f1);
}