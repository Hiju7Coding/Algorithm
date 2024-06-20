#include<iostream>
using namespace std;
char* Import(){
	char* s=new char[100];
	puts("\Enter string ");
	gets(s);
	return s;
}
void Import2(char* s){
	puts("\nEnter string ");
	gets(s);
}
void Import3(char* &s){
	s=new char[100];
	puts("\nEnter string ");
	gets(s);
}
void Export(char *s){
	cout<<"\nString: "<<s;
}
int main(){
	char s[100];
	Import();
	Import2(s);
	Import3(s);
	Export(s);
}