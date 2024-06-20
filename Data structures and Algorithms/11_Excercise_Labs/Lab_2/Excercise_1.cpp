#include<iostream>
using namespace std;
int top = -1; // Cho top=-1.
void Push(int stack[],int value,int capacity);
void Display(int stack[]);
void Pop();
bool IsFull(int capacity);
int main(){
	int stack[10];
	int choice;
	while(!IsFull(10)){
	cout<<"\nEnter the operation to be performed:\n1)Push(insert)\n2)Pop(delete)\n3)Display\n4)Exit "<<endl;
    cout<<"your choice: ";cin>>choice;
	switch(choice){
		case 1:{
			 int x;
			 cout<<"\nEnter the number to be Add: ";cin>>x;
			 Push(stack,x,10); // Them phan tu vao stack
			break;
		}
		case 2:{
			Pop(); // Lay phan tu ra khoi stack
			break;
		}
		case 3:{
			cout<<"\nThe Stack is: "<<endl;
			Display(stack); // Xuat stack ra man hinh
			break;
		}
		case 4:{
			exit(1); // Thoat
			break;
		}
	}
   }
}
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true) cout<<"\nStack is full. Overflow condition!";  // Neu ma stack day thi xuat dong Stack is full. Overflow condition!
    else{
        ++top; 
        stack[top] = value;
    }
}
bool IsEmpty(){ // Kiem tra Stack co rong hay khong
    if(top == -1) return true;
    else return false;
}
void Pop(){
    if(IsEmpty() == true) cout<<"\nStack is empty. Underflow condition!";  // Neu ma stack rong thi xuat dong Stack is empty. Underflow condition!
    else --top;
}
void Display(int stack[]){
	if(IsEmpty() == true) cout<<"Stack is empty. Underflow condition!";  // Neu ma stack rong thi xuat dong Stack is empty. Underflow condition!
	else for(int i=top;i>=0;i--) cout<<"stack["<<i<<"]="<<stack[i]<<endl; // In ra cac phan tu trong stack
}
bool IsFull(int capacity){ // Kiem tra stack co day hay khong
    if(top >= capacity - 1) return true; // Neu ma top >= so phan tu toi da co trong stack thi tra ve true
    else return false; // Neu khong tra ve false
}
