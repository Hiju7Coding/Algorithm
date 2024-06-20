#include<iostream>
using namespace std;
int count_word(char *s){
	strcat(s," ");
	int d=0,sum=0;
	for(int i=0;i<strlen(s);i++){
	if(s[i]!=' ') d++; 
	else{
		if(d>0) sum++;
		d=0;
	}
    }
    return sum;
}
int main(){
	int n,sum=0;
	FILE *f=fopen("4_7.INP","rt");
    FILE *f1=fopen("4_7.OUT","wt");
	fscanf(f,"%d",&n);
	char s[100];
	while(!feof(f)){
		fscanf(f,"%d",&n);
		fgets(s,100,f);
		fputs(strrchr(s,' '),f1);
		sum+=count_word(s);
	}
	fprintf(f1,"\n %d",sum);
	fclose(f);
	fclose(f1);
}