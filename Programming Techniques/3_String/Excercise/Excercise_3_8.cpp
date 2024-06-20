#include<iostream>
#include<string.h>
using namespace std;
int count_words_type(char *s, int a[]);
int main(){
	char s[256];
	int a[100];
	strcpy(s,"lap trinh LA ngHE thuat");
	int n=count_words_type(s,a);
	for(int i = 0; i < n - 1;i++)
	for(int j = i + 1; j < n;j++) 
	if(a[i] > a[j]) swap(a[i], a[j]);
	
	int max = -1, tmp, count = 1;
	for (int i = 0; i < n;i++) {
		if (a[i] != a[i+1]) {
			if (max < count) {
				max = count;
				tmp = a[i];
			}
			count = 1;
		} else count++;
	}
	cout<<"max: "<<max<<endl;
	cout<<"tu loai: "<<tmp<<endl;
	return 0;
}

int count_words_type(char *s, int a[]){
	int count = 0, j = 0;
	for (int i=0;i<strlen(s);i++) {
		if (s[i] == ' ') continue;

		count++;
		
		if (s[i+1] == ' ' || !s[i+1]) {
			a[j++] = count;
			count = 0;
		}
	}
	return j;
}
