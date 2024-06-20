#include<iostream>
using namespace std;
char* Longestcharword(char *s,char *t);
int main(){
	char word[256],temp[100];
	gets(word);
	cout<<"\n\nLonggest word: "<<Longestcharword(word,temp);
}
char* Longestcharword(char *s,char *t){    // toi thich am nhac
	strcat(s," ");
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
	return t;
}