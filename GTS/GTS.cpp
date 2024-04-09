#include<iostream>
#define maxn 100
using namespace std;
void Import_Costmatrix(int a[maxn][maxn],int &n){
	FILE *f=fopen("Tax.INP","rt");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	fscanf(f,"%d",&a[i][j]);	
	fclose(f);

}
void Export_bestway(int tour[maxn][maxn],int cost[maxn],int n){
	int temp,min=INT_MAX;
	FILE *f=fopen("Bestroad.OUT","wt");
	for(int i=1;i<=n;i++){
		if(cost[i]<=min){
			min=cost[i];
			temp=i;
		}
	}
	fprintf(f,"%d \n",min);
	for(int i=0;i<=n;i++) fprintf(f,"%d ",tour[i][temp]);
	fclose(f);
}
int newroad(int tour[maxn][maxn],int v,int n,int k,int p){
	for(int i=p;i<n-1;i++)
	if(tour[i][k]==v) return 0;
	return 1;
}
void Find_bestway(int a[maxn][maxn],int n){
	int tour[maxn][maxn],min=INT_MAX,cost[maxn],v,w;
	for(int k=1;k<=n;k++){
	tour[0][k]=k;v=k;
	cost[k]=0;
	for(int i=1;i<=n;i++){
    if(i!=n){
    for(int j=1;j<=n;j++){
    	if(newroad(tour,j,i,k,0)){
    	if(a[v][j]>0 && a[v][j]<min){
    		min=a[v][j];
    		w=j;
		}
		}
	}
    } 
    else{
    for(int j=1;j<=n;j++){
    if(newroad(tour,j,i,k,1)){
    if(a[v][j]>0 && a[v][j]<min){
    	min=a[v][j];
    	w=j;
	}
	}	
	}	
	}
	tour[i][k]=w;
	cost[k]+=min;
	v=w;
	min=INT_MAX;
    }
    cout<<k<<" "<<cost[k]<<endl;
    }
    Export_bestway(tour,cost,n);
}
int main(){
	int c[maxn][maxn],n;
	Import_Costmatrix(c,n);
	Find_bestway(c,n);	
}