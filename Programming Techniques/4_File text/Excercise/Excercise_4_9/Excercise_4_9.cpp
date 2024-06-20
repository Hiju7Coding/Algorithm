#include<iostream>
using namespace std;
FILE *f1=fopen("4_9.OUT","wt");
char* Longestcharword(char *s){    
	strcat(s," ");
	char *t=new char[50];
	int count = 0, max = INT_MIN,m,n;
	for(int i=0;i<strlen(s);i++){
		if(s[i] == ' ') continue;
		count++;
		if(s[i+1] == ' ' || !s[i+1]){
		if(max < count){
			max = count;
			m=i+1;
			n=i+2-count;
		}
		count = 0;
		}
	}
	for(int i=0;i<max;i++) t[i]=s[i+n-1];
	t[max]='\0';
	return t;
}
void Find_longmax(){
	int n;
	FILE *f=fopen("4_9.INP","rt");
	fscanf(f,"%d",&n);
	while(!feof(f)){
		fscanf(f,"%d",&n);
		char s[100];
		fgets(s,100,f);
		s[strlen(s)-1]='\0';
        fputs(Longestcharword(s),f1);
        fprintf(f1,"\n");
	}
	fclose(f);
}
char *Left(char *s){
	char *temp=new char[100];
	temp=s;
	for(int i=0;i<strlen(temp);i++)
	if(temp[i]==' ') temp[i]='\0';
	return temp;
}       
void Find_LR(){
	int n;
	FILE *f=fopen("4_9.INP","rt");
	fscanf(f,"%d",&n);
	while(!feof(f)){
		fscanf(f,"%d",&n);
		char s[100],t[100];
		fgets(s,100,f);
		strcpy(t,s);
		s[strlen(s)-1]='\0';
        fputs(Left(t),f1);
        fputs(strrchr(s,' '),f1);
        fprintf(f1,"\n");
	}
	fclose(f);
}
void Find_Longgeststring(){
	int n,i;
	FILE *f=fopen("4_9.INP","rt");
	char t[100];
	fscanf(f,"%d",&n);
	while(!feof(f)){
		fscanf(f,"%d",&n);
		char s[100];
		fgets(s,100,f);
		s[strlen(s)-1]='\0';
		if(strlen(s)>i){
		i=strlen(s);
		strcpy(t,s);
		t[i]='\0';
	    }
	}
	fputs(t,f1);
	fclose(f);
}
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
void Count(){
	int n,sum=0;
	FILE *f=fopen("4_9.INP","rt");
	fscanf(f,"%d",&n);
	while(!feof(f)){
		fscanf(f,"%d",&n);
		char s[100];
		fgets(s,100,f);
		sum+=count_word(s);
	}
	fprintf(f1,"\n%d",sum);
	fclose(f);
}
int Frequency_word(char* s,char *t){
	int d=0;
	char *p;
	p=strstr(s,t);
	while(p!=NULL){
		p=strstr(s,t);
		if(p!=NULL){
		d++;
		strcpy(s,p);
		for(int i=0;i<strlen(t);i++) s[i]=' ';
	    }
	}
	return d;
}
void Frequence(){
	int n,sum=0;
	FILE *f=fopen("4_9.INP","rt");
	fscanf(f,"%d",&n);
	char t[100];
	strcpy(t,"your");
	while(!feof(f)){
		fscanf(f,"%d",&n);
		char s[100];
		fgets(s,100,f);
		s[strlen(s)-1]='\0';
		sum+=Frequency_word(s,t);
	}
	fprintf(f1,"\n%d",sum);
	fclose(f);
}
int main(){
    Find_longmax();
    fprintf(f1,"\n");
    Find_LR();
    fprintf(f1,"\n");
    Find_Longgeststring();
    fprintf(f1,"\n");
    Count();
    fprintf(f1,"\n");
    Frequence();
    fclose(f1);
}