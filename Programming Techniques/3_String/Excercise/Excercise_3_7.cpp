#include<iostream>
#include<cstring>
#define maxn 100;
using namespace std;
char* insertstring(char *s,char *x,char *y,char *t);
int main(){
	char word[256],x[256],y[256],temp[256];
	strcpy(word,"toi thich bong da va toi thich lap trinh");
	strcpy(x,"toi");
	strcpy(y,"to");                               
	cout<<"\nResult: "<<insertstring(word,x,y,temp);
}
char* insertstring(char *s,char *x,char *y,char *t){
	int p=strlen(s);
	t= strstr(s,x);
	int d = t - s;
	strcpy(t, t + strlen(x));
	strcat(y, t);
	strcpy(s + d, y);
    return s;
}