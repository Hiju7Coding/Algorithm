#include<iostream>
using namespace std;
int main (){
    FILE *f=fopen("TXT5.txt","rt");
    int s=0,x;
    while(!feof(f)){
    fscanf(f,"%d",&x);
    s=s+x;
    }
    cout<<s;
    fclose(f);
    return 0;
}
