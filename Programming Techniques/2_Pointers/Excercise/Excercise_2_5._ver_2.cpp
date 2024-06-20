#include <iostream>
#include <math.h>
using namespace std;
struct dathuc{	
	double heso;
	int somu;
};

struct node{	
	dathuc info;
	struct node *next;
};

struct list{
	node *head,*tail;
};
node* taonut(dathuc pt);
void chennutvaocuoi(list &l,node *p);
void nhapdathuc(list &l);
void xuatdathuc(list l);
double giatridathuc(list l, double  x);
list l;
int main(){
	dathuc pt;
	nhapdathuc(l);
	xuatdathuc(l);
	cout<<"Result: "<<giatridathuc(l,2);
}
node* taonut(dathuc pt){   
    node *p=new node;
	if (p==NULL){
	cout<<"Khong du bo nho";
	exit(1);
	}
	p->info=pt;
	p->next=NULL;
	return p;
}
void chennutvaocuoi(list &l,node *p){
	if(l.head==NULL){	
	l.head=p;
	l.tail=p;
	}
	else{
	l.tail->next=p;
	l.tail=p;
	}
}
void nhapdathuc(list &l){
	dathuc pt;
	int n;
	cout<<"Nhap so luong don thuc cua da thuc : ";
	cin>>n;
	for (int i=1;i<=n;i++){
	cin>>pt.heso;
	cin>>pt.somu;
	chennutvaocuoi(l,taonut(pt));
	}
}

void xuatdathuc(list l){
	cout<<endl;
	node *p = l.head;
	while (p!=NULL){
	cout<<p->info.heso<<"x^"<<p->info.somu<<" ";
	p=p->next;
	}
}
double giatridathuc(list l, double  x){
	node *p = l.head;
	int s=0;
	while (p!=NULL){
	s=s+p->info.heso*pow(x,p->info.somu);
	p=p->next;
	}
	return s;
}
