#include<iostream>
#include<string.h>
#define maxn 100
using namespace std;
struct book{
	char title[200];
	char nameofauthors[100];
	int yearofpublication;
};
void Enter_book_information(book &booka){       // Ham nhap thong tin 1 cuon sach
	rewind(stdin);
	cout<<"Enter book title: ";
	cin.getline(booka.title,199);
	cout<<"Enter author's name: ";
	cin.getline(booka.nameofauthors,99);
	cout<<"Enter year of publication: ";
	cin>>booka.yearofpublication;
}
void Book_entry(book bookn[],int &n){   // Ham nhap danh sach cuon sach
	for(int i=1;i<=n;i++){
	cout<<"Book "<<i<<" entry "<<endl;
	Enter_book_information(bookn[i]);
}
}
void Book_information(book booka){ // Ham in ra thong tin 1 cuon sach
	cout<<"\nBook title: ";cout<<booka.title;
	cout<<"\nThe writer's name: ";cout<<booka.nameofauthors;
	cout<<"\nYear of publication: ";cout<<booka.yearofpublication<<endl;
}
void Print_book_information(book bookn[],int n){ // Ham in ra danh sach cac cuon sach
	for(int i=1;i<=n;i++){
	cout<<"\nBook "<<i<<" information "<<endl;
	Book_information(bookn[i]);
}
}
void Find_books(book bookn[],int n){ // Ham tim thong tin cua cuon sach thong qua ten sach
	book booka;
	cout<<"Enter the title of the book you are looking for: ";
	rewind(stdin);
	cin.getline(booka.title,199);
	for(int i=1;i<=n;i++){
	if(strcmp(booka.title,bookn[i].title)==0)
	Book_information(bookn[i]);
}
}
void Edit_data(book bookn[],int n){ // Ham chinh sua du lieu cua 1 cuon sach
	int number,k;
	char Data[30];
	rewind(stdin);
	cout<<"Select the book to edit: ";cin>>number;
	rewind(stdin);
	cout<<"Enter the amount of information to be corrected (k <= 3): ";cin>>k; // Nhap so luong thong tin can chinh sua 
	for(int i=1;i<=k;i++){
	cout<<"Select the data to edit(title/author/year): ";cin.getline(Data,29);  // Nhap ten loai du lieu can chinh sua
	if(strcmp(Data,"title")==0){  
		cout<<"\nEdit title: ";
		cin.getline(bookn[number].title,199);
	}
	if(strcmp(Data,"author")==0){
		cout<<"\nEdit nameofauthors: ";
		cin.getline(bookn[number].nameofauthors,99);
	}
	if(strcmp(Data,"year")==0){
		cout<<"\nEdit yearofpublication: ";
		cin>>bookn[number].yearofpublication;
	}
	}
}
void Insert_book(book bookn[],int &n){ // Ham chen them 1 cuon sach
	int k;
	n++;
	cout<<"Enter the location to insert: ";cin>>k;
	for(int i=n;i>k;i--) bookn[i]=bookn[i-1];
	Enter_book_information(bookn[k]);
}
void Delete_book(book bookn[],int &n){ // Ham xoa 1 cuon sach
	int k;
	cout<<"Enter the location to delete: ";cin>>k;
	for(int i=k;i<n;i++) bookn[i]=bookn[i+1];
	n--;
}
int main(){
	int n;
	book bookn[maxn];
	cout<<"Enter the number of books: ";cin>>n;
	Book_entry(bookn,n); // nhap thong tin cac cuon sach
	Edit_data(bookn,n); //sua du lieu cac cuon sach
	Find_books(bookn,n); // tim cuon sach qua tua de
	Insert_book(bookn,n); // chen them sach vao danh sach cac cuon sach
	Delete_book(bookn,n); // xoa 1 cuon sach trong danh sach cac cuon sach
	Print_book_information(bookn,n); // in thong tin cac cuon sach
}

