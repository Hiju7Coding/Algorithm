#include<iostream>
#include<ctime>
using namespace std;
int main(){
    FILE *f; 
	int m,n;
    srand(time(NULL));
    f=fopen("TXT3.txt","wt");
    cout<<"Nhap so m = ";cin>>m;
    cout<<"Nhap so n = ";cin>>n;
    fprintf(f,"%d %d\n",m,n);
    for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++)
    fprintf(f,"%6d",rand());
    fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}
