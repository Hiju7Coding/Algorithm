#include<iostream>
using namespace std;
int main()
{
    FILE *f; int a,b,c;
    f=fopen("TXT1.txt","wt");
    cout<<"Nhap 3 so : ";cin>>a>>b>>c;
    fprintf(f,"%d %d %d",a,b,c);
    fclose(f);
    return 0; 
}
