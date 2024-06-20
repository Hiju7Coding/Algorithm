#include<iostream>
#include<math.h >
using namespace std;
struct node{
	int a;
	node *next;
};
struct list{
	node* head;
	node* tail;
};
list l,l1,l2,head,tail;
node* getnode(int x){
    node *p=new node;
    if(p==NULL) exit(1);
    p->a=x;
    p->next=NULL;
    return p;
}
void Tail_import(list &l, node *p){
    if (l.head==NULL){
    l.head=p; 
    l.tail=p;
    }
    else{
    l.tail->next=p;
    l.tail=p;
    }
}
void Import(list &l){
    int x,n;
    cout<<"Enter n = ";cin>>n;
    for(int i=1;i<=n;i++){
    cin>>x;
    Tail_import(l,getnode(x));
    }
}
int count_list(list &l){ 
    int n=0;
    node *p=l.head;
    while(p!=NULL){
    n+=p->a;
    p=p->next;
    }
    return n;
}
int Find_x(list &l,int x){
	node *p=l.head;
    while(p!=NULL){
    if(p->a==x) return 1;
    p=p->next;
    }
    return 0;
}
void ProcessList(list l){ 
    node *p=l.head;
    while(p!=NULL){
    cout<<p->a<<" ";
    p=p->next;
    }
    cout<<endl;
}
void Exchange_list(list l){
	for(node *p=l.head;p!=NULL;p=p->next){
    for(node *q=p->next;q!=NULL;q=q->next){
    if(p->a >q->a){
       int tmp=p->a;
       p->a=q->a;
       q->a=tmp;
    }
    }
    }
    ProcessList(l);
}
void Split_list(list &l){
	for(node *p=l.head;p!=NULL;p=p->next){
		if(p->a%2!=0) Tail_import(l1,getnode(p->a));
		else Tail_import(l2,getnode(p->a));
	}
	ProcessList(l1);
	ProcessList(l2);
}
int prime(int a){
	int k=sqrt(a);
	if(a<2) return 0;
	for(int i=2;i<=k;i++)
	if(a%i==0) return 0;
	return 1;
}
void Insert_prime(list l){
	node *p=l.head;
    while(p!=NULL){
    if(prime(p->a)){
    	int k=p->a;
    	while(!prime(++k));
    	node* temp= getnode(k);
    	temp->next=p->next;
    	p->next=temp;
    	p=p->next->next;
	}
    else p=p->next;
    }
    ProcessList(l);
}
void Delete(list &l,int position){ 
    if(position == 1 || l.head == NULL || l.head->next == NULL){ 
    if(l.head == NULL) printf("\nCha co gi de xoa het!");
	else l.head = l.head->next;
	}
	else{ 
        int k = 2;
        node *p = l.head;
        while(p->next->next != NULL && k != position){
            p = p->next;
            ++k;
        }
        if(k != position) cout<<"\nVi tri khong hop le! ";
		else p->next = p->next->next;
    }
}
void Delete_prime(list l){
	int k=1;
	node* p= l.head;
    while(p!= NULL){
    if(prime(p->a)){
    	if(k==1) Delete(l,k);
    	else{
    		k--;
    		Delete(l,k);
		}
	}
	k++;
	p=p->next;
    }
    ProcessList(l);
}
int main(){
	int x;
	Import(l);
	cout<<endl;
	cout<<"Result: "<<count_list(l)<<endl;
	cout<<endl;
	cout<<"Enter number you want to find,x= ";cin>>x;
	cout<<"Result: "<<Find_x(l,x)<<endl;
	cout<<endl;
	Exchange_list(l);
	cout<<endl;
	Split_list(l);
	cout<<endl;
	Insert_prime(l);
	cout<<endl;
	Delete_prime(l);
}