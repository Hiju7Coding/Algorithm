#include<iostream>
#define maxn 100
using namespace std;
void char_frequency(char *s){
	FILE *f1=fopen("4_6.OUT","wt");
	int d=1;
	for(int i=0;i<strlen(s);i++){
	for(int j=i+1;j<=strlen(s);j++){
	if(static_cast<int16_t>(s[i]) == static_cast<int16_t>(s[j]) ){
		d++;
		for(int k=j;k<=strlen(s);k++) s[k]=s[k+1];
		j--;
	}
    }
    if(static_cast<int16_t>(s[i])!=32){
    	fputc(s[i],f1);
    	fprintf(f1," %d ",d);
    }
    d= 1;
    }
    fclose(f1);
}
int main(){
	char s;
	char p[50000];
	int i=0,n;
	FILE *f=fopen("str.INP","rt");
    while(!feof(f)){
    	s=fgetc(f);
    	p[i]=s;
    	i++;
	}
	n=i-1;
	p[n]='\0';
	char_frequency(p);
	fclose(f);
}