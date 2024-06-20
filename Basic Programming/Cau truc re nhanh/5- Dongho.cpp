#include<iostream>
using namespace std;
int main(){
	int h,p,s,h1,p1,s1;
	cout<<"Nhap h,p,s: ";cin>>h>>p>>s;
	if(s+1 == 60){
		s1=0;
		if(p+1 == 60){
			p1=0;
			if(h+1 == 24) h1=0;
			else h1=h+1;
		}
		else{
		p1=p+1;
		h1=h;
	}
	}
	else{
		s1=s+1;
		p1=p;
		h1=h;
	}
	cout<<h1<<":"<<p1<<":"<<s1;
}