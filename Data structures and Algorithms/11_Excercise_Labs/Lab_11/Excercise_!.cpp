#include<iostream>
#define maxn 100
using namespace std;
void createlist(int tree[maxn],int &n);
void Insertheap(int tree[maxn],int &n,int item);
void display(int tree[maxn],int n);
void Deleteheap(int tree[],int &n,int item);
int main(){
	int tree[maxn],n,item;
	createlist(tree,n); // tao cay
	cout<<"\nArray representation of heap: \n"; 
	display(tree,n); // Xuat cac phan tu trong cay
	cout<<endl;
	cout<<"\nEnter item to be inserted into heap: ";cin>>item;
	Insertheap(tree,n,item); // chen heap vao trong cay
    cout<<"\nArray representation of heap: \n";
	display(tree,n); // Xuat cay ra man hinh sau khi chen heap
	cout<<endl;
	Deleteheap(tree,n,item); // Xoa heap
	cout<<"\nAfter deletion of root: \n"; 
	display(tree,n); // Xuat cay ra man hinh sau khi xoa heap
}
void createlist(int tree[maxn],int &n){
	cout<<"\nEnter n: ";cin>>n;
	for(int i=1;i<=n;i++) cin>>tree[i];
}
void Insertheap(int tree[],int &n,int item){
	n=n+1;
	int ptr=n;
	while(ptr>1){
		int par=ptr/2;
		if(item<= tree[par]){
		tree[ptr]=item;
		return;
	    }
	    tree[ptr]=tree[par];
	    ptr=par;
	}
	tree[1]=item;
	return;
}
void Deleteheap(int tree[],int &n,int item){
	item=tree[1];
	int last=tree[n];
	n=n-1;
	int ptr=1,left=2,right=3;
	while(right<=n){
		if(last>=tree[left] && last>=tree[right]){
			tree[ptr]=last;
			return;
		}
		if(tree[right]<=tree[left]){
			tree[ptr]=tree[left];
			ptr=left;
		}
		else{
			tree[ptr]=tree[right];
			ptr=right;
			return;
		}
		left=2*ptr;
		right=left+1;
	}
	if(left=n && last<tree[left]) ptr=left;
	tree[ptr]=last;
	return;
}
void display(int tree[],int n){
	for(int i=1;i<=n;i++) cout<<tree[i]<<" ";
}











