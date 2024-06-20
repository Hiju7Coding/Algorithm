#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
};
struct list{
    node *head,*tail;
};
list head, tail;
node* taonut(int x){
    node *p=new node;
    if(p==NULL) exit(1);
    p->info=x;
    p->next=NULL;
    return p;
}
void chennutvaodau(list &l, node *p){
    if (l.head==NULL){
    l.head=p; 
    l.tail=p;
    }
    else{
    p->next=l.head;
    l.head=p;
    }
}
void danhsachchendau(list &l){
    int x,n;
    cout<<"Nhap vao so n = ";cin>>n;
    for(int i=1;i<=n;i++){
    cin>>x;
    chennutvaodau(l,taonut(x));
    }
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
void danhsachchencuoi(list &l){
    int x,n;
    cout<<"Danh sach co bao nhieu phan tu : ";cin>>n;
    for(int i=1;i<=n;i++){
    cin>>x;
    chennutvaocuoi(l,taonut(x));
    }
}
void chensaunutq(list &l,node *q,int x){
    node *p=taonut(x);
    if(p==NULL) exit(1);
    if(q!=NULL){
    p->next=q->next;
    q->next=p;
    if(q==l.tail) l.tail=p;
    }
    else chennutvaodau(l,p);
}
void ProcessList(list &l){ 
    node *p=l.head;
    while(p!=NULL){
    cout<<p->info<<" ";
    p=p->next;
    }
    cout<<endl;
}
int main(){
	list so;
	danhsachchencuoi(so);
	ProcessList(so);
}
