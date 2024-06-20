#include<iostream>
using namespace std;
int Frequency_word(char* s,char *t);
int main(){
	char word[256],x[256];
	gets(word);
	cout<<"\nword: ";gets(x);
	cout<<"\n\nResult: "<<Frequency_word(word,x);
}
int Frequency_word(char* s,char *t){
	int d=0;
	char *p;
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