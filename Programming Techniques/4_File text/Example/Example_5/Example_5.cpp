#include<iostream>
using namespace std;
struct sinhvien{
char masv[10];
char hoten[40];
int diem;
};
int main(){
    FILE *f;
    f=fopen("hososv.txt","wb");
    sinhvien sv;
    int n;
    cout<<"Nhap so sinh vien:"; cin>>n;
    for (int i=1;i<=n;i++){
    cout<<"Nhap thong tin SV thu "<<i<<":"<<endl;
    cout<<"MASV : ";fflush(stdin);gets(sv.masv);
    cout<<"HOTEN: ";fflush(stdin);gets(sv.hoten);
    cout<<"DIEM : ";cin>>sv.diem;
    fwrite(&sv,sizeof(sv),1,f);
    }
    fclose(f);
    return 0;
}


