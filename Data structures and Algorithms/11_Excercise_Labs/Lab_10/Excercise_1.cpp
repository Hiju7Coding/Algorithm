#include<iostream>
using namespace std;
struct node{
	int info;
    node *left,*right;
};
typedef node *tree;
int Insertnode_BST(tree &root,int k); // Chen node vao BST
void Insertion(tree &root,int &k); // Chen node
void Preorder(tree root); // Xuat ra theo Node Left Right
void Inorder(tree root); // Xuat ra theo Left Node Right
void Postorder(tree root); // Xuat ra theo Left Right Node
int main(){
	int choice,k=0;
	tree seed;
	while (choice!=5){
		cout<<"\nOption:\n1.Insertion\n2.Preorder\n3.Inorder\n4.Postorder\n5.Quit";
		cout<<"\nEnter your choice: ";cin>>choice;
		switch(choice){
			case 1:{
				Insertion(seed,k);
				break;
			}
			case 2:{
				cout<<"\nThe preorder elements are: ";
				Preorder(seed);
				break;
			}
			case 3:{
				cout<<"\nThe inorder elements are: ";
				Inorder(seed);
				break;
			}
			case 4:{
				cout<<"\nThe postorder elements are: ";
				Postorder(seed);
				break;
			}
		}
	}
}
int Insertnode_BST(tree &root,int k){
	if(root!=NULL){	// Neu root rong
	if(root->info==k) return 0; 
	if(root->info>k) return Insertnode_BST(root->left,k); // Neu root->info > k thi cho no chen ben trai
	else return Insertnode_BST(root->right,k); // Neu root->info > k thi cho no chen ben phai
	}
	else{
	root=new node;
	if(root==NULL) return -1;
	root->info=k;
	root->left=root->right=NULL;
	return 1;
	}
}
void Insertion(tree &root,int &k){
	int x;
	if(k==0) root = NULL;
	k++;
	cout<<"Enter the element to insert: ";cin>>x;
	Insertnode_BST(root,x);
}
void Preorder(tree root){
	if(root!=NULL){ //Neu root khac rong thi in ra theo thu tu Node Left Right
	cout<<root->info<<" ";
	Preorder(root->left);
	Preorder(root->right);
	}
}
void Inorder(tree root){
	if(root!=NULL){ //Neu root khac rong thi in ra theo thu tu Left Node Right
	Inorder(root->left);
	cout<<root->info<<" ";
	Inorder(root->right);
	}
}
void Postorder(tree root){
    if(root!=NULL){ //Neu root khac rong thi in ra theo thu tu Left Right Node
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->info<<" ";
    }
}