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
    fread(&sv,sizeof(sv),1,f);
    while(!feof(f)){
    cout<<sv.masv<<" "<<sv.hoten<<" "<<sv.diem<<endl;
    fread(&sv,sizeof(sv),1,f);
    }
    fclose(f);
    return 0;
}

