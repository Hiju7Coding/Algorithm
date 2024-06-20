#include<iostream>
using namespace std;
void Enqueue(int Queue[],int element,int &rear,int arraySize);
void Dequeue(int Queue[],int &front,int rear);
void Display(int Queue[],int front,int rear);
int main(){
	int Queue[10],choice;
	int front = 0, rear = 0,arraySize = 10;
	while(rear!=arraySize){
	cout<<"\n\nEnter the operation to be performed:\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit "<<endl;
    cout<<"your choice: ";cin>>choice; // Nhap lua chon
	switch(choice){
		case 1:{
			int x;
			cout<<"\nEnter the number to be added: ";cin>>x; 
			Enqueue(Queue,x,rear,arraySize); // Them phan tu vao hang doi
			break;
		}
		case 2:{
			cout<<"\nThe number to be deleted is ";
			Dequeue(Queue,front,rear); // Xoa phan tu ra khoi hang doi
			break;
		}
		case 3:{
			cout<<"\nThe Queue is: ";
			Display(Queue,front,rear); // In cac phan tu co trong hang doi ra man hinh
			break;
		}
		case 4:{
			exit(1); // Thoat
			break;
		}
	}
   }
}
void Enqueue(int Queue[], int element, int &rear, int arraySize){
    if(rear == arraySize) cout<<"Queue is full\n"; // Neu phan tu cuoi cung = So luong chua toi da cua hang doi thi in ra hang doi day
    else{
        Queue[rear] = element;    
        rear++;
    }
}
void Dequeue(int Queue[], int& front, int rear){
    if(front == rear) cout<<"Queue is empty\n"; // Neu front = rear thi hang doi rong va in ra hang doi dang trong
    else{
    	cout<<Queue[front];
        Queue[front] = 0;        
        front++;
    }
}
void Display(int Queue[],int front,int rear){
	if(front == rear) cout<<"Queue is empty\n";
	else for(int i=front;i<rear;i++) cout<<Queue[i]<<" "; // Xuat cac phan tu co trong hang doi
}
