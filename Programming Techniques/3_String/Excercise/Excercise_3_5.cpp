#include<iostream>
#include <string.h>
using namespace std;
char* Edit(char *s,int m,int n);
int main(){
	int p,l;
	char word[256];    
	gets(word);
	cout<<"Enter p: ";cin>>p;
	cout<<"Enter l: ";cin>>l;       
	cout<<"\nchar: "<<Edit(word,p,l);
}
char* Edit(char *s,int m,int n){
	int p=strlen(s);
	for(int i=0;i<p-(m+n-1);i++) 
	s[m-1+i]=s[m+n+i-1];
	s[p-n]='\0';
	return s;
}