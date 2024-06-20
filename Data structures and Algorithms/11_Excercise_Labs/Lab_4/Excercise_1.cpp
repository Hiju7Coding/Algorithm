#include<iostream>
using namespace std;
void cqinsert(int queue[],int element,int &rear, int arraySize,int &count);
void cqdelete(int queue[],int &front,int rear,int arraySize,int &count);
void cqdisplay(int queue[],int count);
int main(){
	int queue[10],choice;
	int front=0,rear=0,arraySize=10,count=0;
	while(count!=arraySize){
	cout<<"\n\nEnter choice for circular queue:\n1)Insert\n2)Delete\n3)Display\n4)Exit "<<endl;
    cout<<"your choice: ";cin>>choice;
	switch(choice){
		case 1:{
			int x;
			cout<<"\nEnter any item: ";cin>>x;
	        cqinsert(queue,x,rear,arraySize,count); // Them phan tu vao hang doi
			break;
		}
		case 2:{
            cqdelete(queue,front,rear,arraySize,count); // Xoa phan tu ra khoi hang doi
			break;
		}
		case 3:{
            cqdisplay(queue,count); // In ra cac phan tu trong hang doi
			break;
		}
		case 4:{
			exit(1); // Thoat ham
			break;
		}
	}
   }
}
void cqinsert(int queue[],int element,int &rear,int arraySize,int &count){
    if(count == arraySize) cout<<"Queue is full\n"; // Neu count = arraySize thi hang doi day va in ra Queue is full
    else{
        queue[rear]=element;     // Gan phan tu cuoi cua hang doi = element
        rear=(rear + 1)%arraySize; // cho rear= (rear+1)% arraySize.
        count=count + 1; // Tang bien dem len 1 don vi
    }
}
void cqdelete(int queue[],int &front,int rear,int arraySize,int &count){
    if(count == 0) cout<<"Queue is empty\n"; // Neu count = 0 thi hang doi rong va in ra Queue is empty
    else{    
        front =(front + 1)%arraySize; // cho front= (front+1)%arraySize la gan phan tu hien tai la phan tu phia sau no trong hang doi
        count =count - 1; // Giam bien dem 1 don vi
    }
}
void cqdisplay(int queue[],int count){
	if(count == 0) cout<<"Queue is empty\n"; // Neu count = 0 thi hang doi rong va in ra Queue is empty
	else for(int i=0;i<count;i++) cout<<queue[i]<<" ";  // In ra cac phan tu trong hang doi.
}