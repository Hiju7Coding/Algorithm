#include<iostream>
using namespace std;
char* Find_word(char *s,char *t);
int main(){
	char word[256],x[256];
	gets(word);
	cout<<"\nword: ";gets(x);
	cout<<"\n\nResult: "<<Find_word(word,x);
}
char* Find_word(char *s,char *t){
	char *p= strstr(s,t);
	if( p != NULL ) return t;
	return "-1";
}