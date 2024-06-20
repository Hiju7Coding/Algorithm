#include<iostream>
#include<math.h>
using namespace std;
int prime(int n){
	if(n<2) return 0;
	int k=sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%i==0) return 0;
	return 1;
}
int Proportional_number(int a){
	int k=0,temp;
	for(temp=a;a!=0;a=a/10)
	k=k*10+a%10;
	if(k==temp) return 1;
	return 0; 
}
int Total_digits(int a){
	int k=0,temp;
	for(temp=a;a!=0;a=a/10) k+=a%10;
	return k;
}
int main(){
	FILE *f=fopen("TEXT2.inp","rt");
	FILE *f1=fopen("TEXT2.out","wt");
	int a=0,b=0,c=0,d=0,x,n;
    fscanf(f,"%d",&n);
    for(int i=1;i<=n;i++){
    fscanf(f,"%d",&x);
    a=a+x;
    if(b<x) b=x;
    if(prime(x)){
    	c++;
    	if(Proportional_number(x)) d++;
	}
	fprintf(f1,"%2d ",Total_digits(x));
    }
    fprintf(f1,"\n");
    fprintf(f1,"Sum= %d\n",a);
    fprintf(f1,"max= %d\n",b);
    fprintf(f1,"prime number= %d\n",c);
    fprintf(f1,"Proportional prime number %d\n",d);
    fclose(f);
    fclose(f1);
}