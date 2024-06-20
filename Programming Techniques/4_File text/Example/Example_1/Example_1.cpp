#include<iostream>
using namespace std;
int main(){
	FILE *f=fopen("TEXT1.inp","rt");
	int s=0,x;
    while(!feof(f)){
        fscanf (f,"%d",&x);
        s=s+x;
    }
    fclose(f);
    FILE *f1=fopen("TEXT1.out","wt");
    fprintf(f1,"%d\n",s);
    fprintf(f1,"%f\n",s/3.0);
    fclose(f1);
  return 0;
}