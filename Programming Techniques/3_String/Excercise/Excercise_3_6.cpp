#include<iostream>
using namespace std;
char* insert(char *p,char *q,int a);
int main(){
	int p;
	char word1[256],word2[256];     
	gets(word1);                    
	gets(word2);                    
	cout<<"\nEnter p: ";cin>>p;
	cout<<"\nResult: "<<insert(word1,word2,p);
}
char* insert(char *p,char *q,int a){
	int m=strlen(p),n=strlen(q);
	for(int i=0;i<n;i++){
	for(int j=i+m-1;j>=a+i;j--) p[j+1]=p[j];
	p[a+i]=q[i];
	}
	p[m+n]='\0';
	return p;
}