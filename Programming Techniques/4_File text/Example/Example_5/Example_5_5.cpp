#include<iostream>
#define maxn 10000
using namespace std;
struct sinhvien{
    char masv[10];
    char hoten[40];
    int diem;
};
int main(){
    FILE *f;
    f=fopen("hososv.txt","rb");
    sinhvien sv[maxn];
    int i=0;
    fread(&sv[i],sizeof(sv[i]),1,f);
    while(!feof(f)){
    cout<<sv[i].masv<<" "<<sv[i].hoten<<" "<<sv[i].diem<<endl;
    i++;
    fread(&sv[i],sizeof(sv[i]),1,f);
    }
    fclose(f);
    int n=i;
    sinhvien svtemp;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if (sv[i].diem<sv[j].diem){
    svtemp=sv[i];
    sv[i]=sv[j];
    sv[j]=svtemp;
    }
    cout<<"\nKet qua sap xep:\n";
    for(int i=0;i<n;i++) cout<<sv[i].masv<<" "<<sv[i].hoten<<" "<<sv[i].diem<<endl;
    return 0;
}

    


