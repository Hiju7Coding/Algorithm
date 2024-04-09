#include<iostream>
#define maxn 100
using namespace std;
struct Point{
	int num;
	int numlink;
	int numunlink;
	int a[maxn];
	int b[maxn];
	int color;
};
void Import(int q[maxn][maxn],int &n){
	FILE *f=fopen("Tomau.INP","rt");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	fscanf(f,"%d",&q[i][j]);
    fclose(f);
}
void Transpose(int q[maxn][maxn],Point a[maxn],int &n){
	int count1=0,count2=0;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(i!=j){
		a[i].num=i;
		if(q[i][j]==1){
			count1++;
			a[i].a[count1]=j;
		}
		else{
			count2++;
			a[i].b[count2]=j;
		}
	}
	}
	a[i].numlink=count1;
	a[i].numunlink=count2;
	count1=0;
	count2=0;
	}
}
void swap(Point &a,Point &b){
	Point r=a;
	a=b;
	b=r;
}
void Docking(Point a[maxn],int &n){
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].numlink<a[j].numlink) swap(a[i],a[j]);
	for(int i=1;i<=n;i++) a[i].color=0;
}
void Export(Point a[maxn],int numcolor,int n){
        for(int i=1;i<=numcolor;i++){
        	cout<<"Color "<<i<<": ";
        	for(int j=1;j<=n;j++) if(a[j].color==i) cout<<a[j].num<<" ";
        	cout<<endl;
		}
}
void Coloring(Point a[maxn],int n){
    int numcolor=0,g,h,r;
	Docking(a,n);
	for(int i=1;i<=n;i++){
	for(int p=1;p<=a[i].numlink;p++){
	for(int j=1;j<=n;j++) if(a[i].a[p]==a[j].num) g=j;
    for(int q=1;q<=a[i].numunlink;q++){
    for(int k=1;k<=n;k++) if(a[i].b[q]==a[k].num) h=k;
    if(a[g].color !=0 && a[h].color !=0){
    	if(a[g].color==a[h].color){
    	for(int f=1;f<=a[g].numunlink;f++){
    	for(int l=1;l<=n;l++) if(a[g].b[f] == a[l].num) r=l;
    		if(a[g].color == a[r].color){
    			if(f==1 || f-1==1) a[i].b[f]=a[i].b[f+1];
    			if(f==n || f+1==n) a[i].b[f]=a[i].b[f-1];
    			a[i].numunlink--;
		    }
		}
		}
		else a[i].color=a[h].color;
	}
    }
    }
    if(a[i].color== 0){
    	numcolor++;
    	a[i].color=numcolor;
	}
    }
    Export(a,numcolor,n);
}
int main(){
	int q[maxn][maxn],n;
	Point a[maxn];
	Import(q,n);
	Transpose(q,a,n);
    Coloring(a,n);
}