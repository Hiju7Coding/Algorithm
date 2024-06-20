#include<iostream>
using namespace std;
void Count_uppercase_characters(char *s);
void Find_ASCII(char *s);
char *Edit_sentences(char *s);
int Count_word(char *s);
void Countwordchar(char *s);
void LRWord(char *s);
int main(){
	char word[256],temp[256];
	strcpy(word,"lap trinh LA ngHE thuat");
	strcpy(temp,word);
	Count_uppercase_characters(word);
	Find_ASCII(word);
	cout<<"\n\n"<<Edit_sentences(word);
	cout<<"\n\nThe word count of the string is "<<Count_word(word);
	strcpy(word,temp);
	cout<<"\n\nChar of word: ";Countwordchar(word);
	strcpy(word,temp);
	cout<<"\n\n";LRWord(word);
	strcpy(word,temp);
}
void Count_uppercase_characters(char *s){
	int countupper=0,countlower=0;
	for (int i=0;i<strlen(s);i++){
	if (isupper(s[i])) countupper++;
	if (islower(s[i])) countlower++;
	}
	cout<<"\n Uppercase character: "<<countupper;
	cout<<"\n Lowercase characters: "<<countlower;
	cout<<endl;
}
void Find_ASCII(char *s){
	cout<<"\n char "<<" ASCII";
	for(int i=0;i<strlen(s);i++){
		cout<<"\n  "<<s[i]<<"     "<<static_cast<int16_t>(s[i]);
	}
	cout<<endl;
}
char *Edit_sentences(char *s){
	strlwr(s);s[0]=toupper(s[0]);
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' ') s[i+1]=toupper(s[i+1]);
	return s;	
}
int Count_word(char *s){
	strcat(s," ");
	int d=0,p=0;
	for(int i=0;i<strlen(s);i++){
	if(s[i]!=' ') d++; 
	else{
		if(d>0) p++;
		d=0;
	}
    }
    return p;
}
void Countwordchar(char *s){
	strcat(s," ");
	int d=0;
	for(int i=0;i<strlen(s);i++){
	if(s[i]!=' ') d++; 
	else{
		if(d>0) cout<<d<<" ";
		d=0;
	}
    }
}
void LRWord(char *s){
	char *p;
	const char r=' ';
	p= strrchr(s,r);
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' ') s[i]='\0';
	cout<<"First word: "<<s<<"\nLast word: "<<p;
}







