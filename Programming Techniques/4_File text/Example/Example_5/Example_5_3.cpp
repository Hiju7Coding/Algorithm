#include<iostream>
using namespace std;
struct sinhvien{
    char masv[10];
    char hoten[40];
    int diem;
};
int main(){
   FILE *f;
   f=fopen("hososv.txt","rb");
   sinhvien sv;
   char masosinhvien[10];
   cout<<"Nhap MASV can tim:";fflush(stdin);gets(masosinhvien);
   int found=0;
   while(!feof(f) && found==0){
   fread(&sv,sizeof(sv),1,f);
   if(strcmp(sv.masv,masosinhvien)==0) found=1;
   }
   fclose(f);
   if(found=31)
   cout<<"Tim thay sinh vien :"<<sv.masv<<" "<<sv.hoten<<" "<<sv.diem;
   else
   cout<<"Khong tim thay!";
   cout<<endl;
   return 0;
}

