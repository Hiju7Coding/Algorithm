#include<iostream>
using namespace std;
int main(){
    FILE *f=fopen("TXT4.txt","rt");
    int a,b,c;
    fscanf (f,"%d%d%d",&a,&b,&c);
    cout<<a+b+c;
    fclose(f);
    return 0;
}
