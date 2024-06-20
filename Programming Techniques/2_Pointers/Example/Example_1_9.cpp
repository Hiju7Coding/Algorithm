#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
};
struct list{
    node *head,*tail;
};
int main(){
   node *p,*q,*r;
   list l;
   int a=10, b=20, c=30;
   p=new node;
   p->info=a;
   l.head=p;
   q=new node;
   q->info=b;
   r=new node;
   r->info=c;
   p->next=q;
   q->next=r;
   r->next=NULL;
   l.tail=r;
   cout<<l.head->info<<" ";
   cout<<l.tail->info<<" ";
   node *t=l.head;
   while (t!=NULL){
   cout<<t->info<<" ";
   t=t->next;
   }
   delete p;
   delete q;
   delete r;
   return 0;
}
