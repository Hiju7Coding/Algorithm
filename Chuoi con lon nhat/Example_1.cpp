#include<iostream>
#define maxn 100
using namespace std;
void Import(int a[maxn],int &n){
	FILE *f=fopen("Example_1.INP","rt");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++)
	fscanf(f,"%d",&a[i]);
	fclose(f);
}
void CreateL(int a[maxn],int l[maxn],int p[maxn],int n){
	int max;
	for(int i=1;i<=n;i++){
		if(i==1){
			l[i]=1;
			p[i]=0;
			max=1;
		}
		else{
			if(a[i]>a[i-1]){
				for(int j=1;j<i;j++){
					if(a[j]<a[i] && l[j]>=l[i-1]){
						if(j<i-1 && l[j]==max){
						l[i]=l[j]+1;
						p[i]=j;
						if(l[i]>max) max=l[i];
						j=i;
					    }
					    if(j==i-1){
					    l[i]=l[j]+1;
					    p[i]=j;
					    if(l[i]>max) max=l[i];
					    j=i;
						}
					}
				}
			}
			else{
				for(int j=i-1;j>=1;j--){
					if(a[j]<a[i]){
						l[i]=l[j]+1;
						p[i]=j;
						if(l[i]>max) max=l[i];
						j=0;
					}
			    }
		    }
        }
    }
    int temp=max,kq[maxn],t;
    for(int i=n;i>=1;i--){
    	if(l[i]==temp){
    	kq[temp]=a[i];
    	temp--;
		i=p[i]+1;
		}
	}
    FILE *f=fopen("Example_1.OUT","wt");
    for(int i=1;i<=n;i++) fprintf(f,"%d ",i);
    fprintf(f,"\n");
    for(int i=1;i<=n;i++) fprintf(f,"%d ",a[i]);
    fprintf(f,"\n");
    for(int i=1;i<=n;i++) fprintf(f,"%d ",l[i]);
    fprintf(f,"\n");
    for(int i=1;i<=n;i++) fprintf(f,"%d ",p[i]);
    fprintf(f,"\n");
    for(int i=1;i<=max;i++) fprintf(f,"%d ",kq[i]);
	fclose(f);
}
    
int main(){
	int a[maxn],l[maxn],p[maxn],n;
	Import(a,n);
	CreateL(a,l,p,n);
}