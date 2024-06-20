// dem xem file co bao nhieu chuoi
// chuoi dai nhat co bao nhieu ki tu 
// tu dai nhat co bao nhieu ki tu
// tim so luong ki tu cua moi tu, cua moi chuoi.
// dem xem trong file co bao nhieu tu "your"
#include<iostream>
#include<string>
using namespace std;
int main(){
	FILE *f=fopen("TEXT4.txt","rt");
	FILE *f1=fopen("TEXT4OUT.txt","wt");
	int a=0,b=0,c=0,d=0,e=0,count=0,count1=0,temp;
	fprintf(f1,"Number of characters of each word of each string: \n");
	char s;
	while(!feof(f)){
	s=fgetc(f);
	if(int(s) == 10 || feof(f)){
	a++;
	if(count>b) b=count;
	temp=count;
	fprintf(f1," %d \n",count1);
	if(count1 > c) c=count1; 
    count=0;
    count1=0;
	}
	else{
		count++;
        if(int(s)!=32)	count1++;
        else{
        	fprintf(f1," %d ",count1);
        	if(count1 > c) c=count1;
        	count1=0;
		}
	}
	}
	fprintf(f1,"\nThere are %d string",a);
	fprintf(f1,"\nLongest string has %d characters",b);
	fprintf(f1,"\nLongest word has %d characters",c);
	fprintf(f1,"\n%d ",e);
	fclose(f);
	fclose(f1);
}