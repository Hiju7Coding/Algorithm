#include<iostream>
#include<string>
using namespace std;
int top= -1;
void Push(int stack[],int value,int capacity);
int Pop(int stack[]);
int main(){
	int stack[10],i=0; // Cho stack co 10 phan tu 
	char postfix[20]; 
	cout<<"\nEnter postfix: ";gets(postfix); // Nhap
	while(top!=0 && i!=strlen(postfix)){ // Neu top khac 0 va bien dem i khac do dai cuoi chuoi da nhap
	for(i=0;i<strlen(postfix);i++){
		if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/'){ // Neu cac phan tu la toan tu
		int a=Pop(stack); // lay 2 phan tu a va b trong stack
		int b=Pop(stack);
		int temp;
		// Neu phan tu la toan tu + thi tinh phep cong, - thi tinh phep tru, / tinh phep chia, * tinh phep nhan.
		if(postfix[i]=='+') temp=b+a;
		else if(postfix[i]=='-') temp=b-a;
		else if(postfix[i]=='*') temp=b*a;
		else if(postfix[i]=='/') temp=b/a;
		Push(stack,temp,10);
	    }
		else Push(stack,(int)(postfix[i] - '0'),10); // Neu no la so thi them vao stack
	    }
		cout<<"\n Result: "<<stack[top]<<endl;
    }
}
void Push(int stack[],int value,int capacity){
    if(top >= capacity-1) cout<<"\nStack is full. Overflow condition!"; // Neu top >= tong so phan tu co trong stack thi in ra Stack is full. Overflow condition!
    else{
        ++top; // Tang top len 1 don vi
        stack[top] = value; // cho Phan tu trong stack tai vi tri top = value
    }
}
int Pop(int stack[]){ // lay phan tu ra khoi stack de tinh toan
	int ret;
    if(top ==-1) cout<<"\nStack is empty. Underflow condition!"; // Neu stack rong thi in ra Stack is empty. Underflow condition!
    else{
    	ret=stack[top]; // lay ra phan tu tren cung cua stack ra de tinh toan
    	top--;
	}
	return ret;
}
