#include<iostream>
#include<string.h>
using namespace std;
struct book{
	char title[200];
	char nameofauthors[100];
	int yearofpublication;
};
struct node{
    book bookn;
    node *next;
};
struct list{
    node *head;
	node *tail;
};
node* getnode(book booka){ // tao nut
    node *p=new node;
    if(p==NULL) exit(1);
    p->bookn=booka;
    p->next=NULL;
    return p;
}
void Tail_import(list &l, node *p){  // chen cuoi
    if(l.head==NULL){
    l.head=p; 
    l.tail=p;
    }
    else{
    l.tail->next=p;
    l.tail=p;
}
}
void Enter_book_information(book &booka){       // Ham nhap thong tin 1 cuon sach
	rewind(stdin);
	cout<<"\nEnter book title: ";
	cin.getline(booka.title,199);
	cout<<"Enter author's name: ";
	cin.getline(booka.nameofauthors,99);
	cout<<"Enter year of publication: ";
	cin>>booka.yearofpublication;
}
void Import(list &l){ // Ham nhap thong tin cac cuon sach
    int n;
    book booka;
    cout<<"Enter the number of books: ";cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"\nEnter book "<<i<<" information "<<endl;
    Enter_book_information(booka);
    Tail_import(l,getnode(booka));
    }
}
void Book_information(book booka){ // Ham in ra thong tin 1 cuon sach
	cout<<"\nBook title: ";cout<<booka.title;
	cout<<"\nThe writer's name: ";cout<<booka.nameofauthors;
	cout<<"\nYear of publication: ";cout<<booka.yearofpublication<<endl;
}
void Print_book(list &l,int &count){ // Ham in ra thong tin cac cuon sach
    node *p=l.head;
    while(p!=NULL){
    cout<<"\nThong tin sach thu "<<++count;
    Book_information(p->bookn);
    p=p->next;
    }
    cout<<endl;
}
void Edit_book(book &bookn){ // Ham chinh sua du lieu cua 1 cuon sach
	int k;
	char Data[30];
	cout<<"Enter the amount of information to be corrected (k <= 3): ";cin>>k; // Nhap so luong thong tin can chinh sua
	for(int i=1;i<=k;i++){
	rewind(stdin);
	cout<<"Select the data to edit(title/author/year): ";cin.getline(Data,29);  // Nhap ten loai du lieu can chinh sua
	if(strcmp(Data,"title")==0){  
		cout<<"\nEdit title: ";
		cin.getline(bookn.title,199);
	}
	if(strcmp(Data,"author")==0){
		cout<<"\nEdit nameofauthors: ";
		cin.getline(bookn.nameofauthors,99);
	}
	if(strcmp(Data,"year")==0){
		cout<<"\nEdit yearofpublication: ";
		cin>>bookn.yearofpublication;
	}
	}
}
void Edit_data(list &l,int count){ // Ham tim sach de sua thong tin sach
    node *p=l.head;
    int number;
    cout<<"\nSelect the book to edit: ";cin>>number;
    while(p!=NULL){
    count++;
    if(count==number) Edit_book(p->bookn);
    p=p->next;
    }
    cout<<endl;
}
void Find_book(list &l){ // Ham tim thong tin cuon sach bang tua de sach
    book booka;
	node *p=l.head;  
	cout<<"\nEnter the title of the book you are looking for: ";
	rewind(stdin);
	cin.getline(booka.title,199);
    while(p!=NULL){
    if(strcmp(booka.title,p->bookn.title)==0) Book_information(p->bookn);
    p=p->next;
    }
    cout<<endl;
}
void Insert(list &l,book booka,int position){ // Ham chen 1 cuon sach
    if(position == 1 || l.head == NULL){ // chen vao dau
    node *temp=getnode(booka);
    if(l.head == NULL) l.head = temp; 
	else{
        temp->next = l.head; 
        l.head = temp; 
    }
    }
	else{
    int k = 2;
    node *p = l.head;
    while(p != NULL && k != position){ // chen vi tri khac vi tri dau
        p = p->next;
        ++k;
    }
    if(k != position) cout<<"\n Vi tri chen khong hop le! ";
	else{
    node *temp = getnode(booka);
    temp->next = p->next;
    p->next = temp;
    }
    }
}
void Insert_book(list &l){ // Ham nhap vi tri chen sach
	int k;
	book booka;
	cout<<"\nEnter the location to insert: ";cin>>k;
	Enter_book_information(booka);
	Insert(l,booka,k);
}
void Delete(list &l,int position){ // Ham xoa sach
    if(position == 1 || l.head == NULL || l.head->next == NULL){ // xoa vi tri dau
    if(l.head == NULL) printf("\nCha co gi de xoa het!");
	else l.head = l.head->next;
	}
	else{ // xoa vi tri bat ki
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
void Delete_book(list &l){ // Ham nhap vi tri can xoa
    int k;
	cout<<"Enter the location to delete: ";cin>>k;
	Delete(l,k);
}
list libary;
int main(){
	int k=0;
	Import(libary);
	cout<<"\n-----------------------"<<endl;
	Edit_data(libary,0);
	cout<<"\n-----------------------"<<endl;
	Find_book(libary);
	cout<<"\n-----------------------"<<endl;
	Insert_book(libary);
	cout<<"\n-----------------------"<<endl;
	Delete_book(libary);
	cout<<"\n-----------------------"<<endl;
	Print_book(libary,k);
}
