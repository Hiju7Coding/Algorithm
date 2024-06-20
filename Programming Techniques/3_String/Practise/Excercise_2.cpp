#include<iostream>
using namespace std;
void Import(char* s){
	puts("\nEnter your string: ");
	gets(s);
}
void Demhoathuong(char* s){
	int hoa=0,thuong=0;
	for(int i= 0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z') hoa++;
		if(s[i]>='a' && s[i]<='z') thuong++;
	}
	cout<<"\nIn hoa: "<<hoa<<"\nin thuong: "<<thuong;
}
void Find_ASCII(char* s){
    cout<<"\n char "<<" ASCII";
	for(int i=0;i<strlen(s);i++) cout<<"\n  "<<s[i]<<"     "<<static_cast<int16_t>(s[i]);
	cout<<endl;
}
void Chuyen_hoathuong(char *s){
	strlwr(s);s[0]=toupper(s[0]);
	for (int i=0;i<strlen(s);i++)
	if (s[i]==' ') s[i+1]=toupper(s[i+1]);
	
}
void Count_word(char* s){
	int d=(strlen(s)!=' '); 
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' ' && s[i+1]!=' ') d++;
	cout<<"\nSo tu trong chuoi la: "<<d;	
}
void Count_char(char* s){
	int d=0;
	cout<<"\nSo ki tu cua 1 tu: ";
	for(int i=0;i<=strlen(s);i++){
	if(s[i]!=' ') d++;
	else{
		cout<<d<<" ";
		d=0;
	}
	}
}
void Exchange_ASCII(char* s){
	for(int i=0;i<strlen(s)-1;i++)
	for(int j=1;j<strlen(s);i++)
	if(s[i]!=' ')
	if(static_cast<int16_t>(s[j])>static_cast<int16_t>(s[i])) Exchange(s[i],s[j])
}
void Export(char *s){
	cout<<"\nString: "<<s;
}
int main(){
	char s[100];
	Import(s);
	Export(s);
	cout<<endl;
	Demhoathuong(s);
	cout<<endl;
	Find_ASCII(s);
	cout<<endl;
	Chuyen_hoathuong(s);
	cout<<endl;
	Export(s);
	cout<<endl;
	Count_word(s);
	cout<<endl;
	Count_char(s);
	cout<<endl;
	Exchange_ASCII(s);
	Export(s);
}