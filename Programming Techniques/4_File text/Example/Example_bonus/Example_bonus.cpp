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
int main(){
	FILE *f=fopen("BONUS.TXT","wt");
	int d=0,n= 1000000;
		for(int i= 1;i<n;i++){
		if(prime(i)){
		fprintf(f," %7d ",i); 
		d++;
		if(d%10==0) fprintf(f,"\n");
        }
	}
	fprintf(f,"\n %7d ",d);
	fclose(f);
}