#include<iostream>
#include<ctime>
using namespace std;
int main(){
    FILE *f; int n;
    srand(time(NULL));
    f=fopen ("TXT2.txt","wt");
    cout<<"Nhap so n = ";cin>>n;
    fprintf(f,"%d\n",n);
    for (int i=1;i<=n;i++)
    {
    fprintf(f,"%6d",rand());
    if(i%10==0) fprintf(f,"\n");
    }
    fclose(f);
    return 0;
}
