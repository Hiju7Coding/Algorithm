#include<iostream>
using namespace std;
struct node{
	int data;
	node *next,*prev;
};
struct list{
	node *head;
	node *tail;
};
list l;
node* getnode(int x); // Ham tao node
void CreateorAppend_List(list &l); // Tao danh sach
void Insert(list &l,int x,int position); 
void Insertbegin(list &l); // Chen 1 phan tu vao dau danh sach
void Insertmiddle(list &l); // Chen 1 phan tu vao giua danh sach
void Delete(list &l,int position);
void Remove(list &l); // Xoa 1 phan tu ra khoi danh sach
int count_list(list l); // Dem so phan tu co trong danh sach
void display(list l); // Xuat danh sach ra man hinh
int main(){
	int choice;
	while(choice!=7){
	cout<<"\nEnter your choice:\n1)Create/Append list\n2)Insert in Beginning\n3)Insert in Middle\n4)Remove from the List\n5)Count\n6)Display\n7)Quit"<<endl;
    cout<<"Your choice: ";cin>>choice;
	switch(choice){
	case 1:{
		CreateorAppend_List(l); // Tao danh sach
		cout<<endl;
		break;
	}
	case 2:{
		Insertbegin(l); // Chen 1 phan tu vao dau danh sach
		cout<<endl;
		break;
	}
	case 3:{
		Insertmiddle(l); // Chen 1 phan tu vao giua danh sach
		cout<<endl;
		break;
	}
	case 4:{
		Remove(l); // Xoa 1 phan tu ra khoi danh sach
		cout<<endl;
		break;
	}
	case 5:{
		cout<<"\nThe Number of Nodes: "<<count_list(l); // Dem so phan tu co trong danh sach
		cout<<endl;
		break;
	}
	case 6:{
		display(l); // Xuat danh sach ra man hinh
		cout<<endl;
		break;
	}
	}
}
}
node* getnode(int x){
    node* p=(struct node*)malloc(sizeof(node));
    p->data = x; // p->data=x , voi x da nhap truoc do
    p->prev = NULL; // Cho p->prev = NULL
    p->next = NULL; // p->next = NULL
    return p;
}
void CreateorAppend_List(list &l){
	int choice;
	while(choice!=2){ // Neu choice = 2 thi nghia la chon no tuong ung voi viec dung lai, khong chen them nua. 
	Insertbegin(l);
	cout<<"Enter more(1->yes/2->no): ";cin>>choice;
    }
}
void Insert(list &l,int x,int position){ 
    if(position == 1 || l.head == NULL){  // Neu vi tri can chen la vi tri dau
    node *temp=getnode(x);  // Tao node
    if(l.head == NULL) l.head=l.tail= temp; // Neu node dau rong thi cho no = temp
	else{
    l.head->prev = temp;
    temp->next = l.head;
    l.head=temp;
    }
    }
	else{
    int k = 2;
    node *p = l.head;
    while(p != NULL && k != position){ 
        p = p->next;
        ++k;
    }
    if(k != position) cout<<"\nInvalid insert position! "; // Neu khong tim duoc vi tri thi xuat ra dong Invalid insert position
	else{
	node *temp=getnode(x); // Tao node va gan node vao vi tri can chen
    l.tail->next= temp; 
    temp->prev= l.tail;
    l.tail= temp;
    }
    }
}
void Insertbegin(list &l){
	int n;
	cout<<"\nEnter any number: ";cin>>n;
	Insert(l,n,1); // Chen dau nen khi truyen vao ham insert thi position phai bang 1
}
void Insertmiddle(list &l){
	int n,k;
	cout<<"\nEnter the Position to be Inserted: ";cin>>k;
	cout<<"\nEnter any number: ";cin>>n;
	Insert(l,n,k); // Chen vao vi tri khac vi tri dau va cuoi
}
void Delete(list &l,int position){ 
    if(position == 1 || l.head == NULL || l.head->next == NULL){ 
    if(l.head == NULL){
	printf("\nNo data to delete");
	return;
    }
	else{
	l.head = l.head->next;
	l.head->prev= NULL;
    }
	}
	else{ 
        int k = 2;
        node *p = l.head;
        while(p->next->next != NULL && k != position){
            p=p->next;
            p->prev= NULL;
            ++k;
        }
        if(k != position) cout<<"\nInvalid position! ";
		else{
			p->next= p->next->next;
			p->prev= NULL;
		}
    }
}
void Remove(list &l){
	int data,k;
	cout<<"\nEnter the Data to be Deleted: ";cin>>data; // Nhap du lieu cua phan tu can xoa
	node *p=l.head;
    while(p!=NULL){
    k++; // Dem vi tri cua phan tu can xoa
    if(data==p->data) Delete(l,k); // Khi tim duoc du lieu can xoa thi xoa phan tu do theo vi tri ma ta da dem duoc
    p=p->next;
    }
    cout<<endl;
}
int count_list(list l){
	int k=0;
	node *p=l.head;
    while(p!=NULL){
    k++; // Neu co phan tu nao khac NULL thi k tu dong tang len 1.
    p=p->next;
    }
    return k;
}
void display(list l){
	node *p=l.head;
    while(p!=NULL){
    cout<<p->data<<" "; // Neu co phan tu khac NULL thi in ra phan tu do
    p=p->next;
    }
    cout<<endl;
}