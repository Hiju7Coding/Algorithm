#include<iostream>
#include<math.h>
using namespace std;
struct node{
	int info;
    node *left,*right;
};
typedef node *tree;
int Insertnode_BST(tree &root,int k);
void Create_BST(tree &root);
void NLR(tree root);
void LNR(tree root);
void LRN(tree root);
void NRL(tree root);
void RNL(tree root);
void RLN(tree root);
void Insert(tree root){
	int k;
	cout<<"Enter info: ";cin>>k;
    Insertnode_BST(root,k);
}
int Find_node(tree root,int x){
	if(root!=NULL){
	if(root->info == x) return 1;
	if(root->info < x) Find_node(root->right,x);
	else Find_node(root->left,x);
    }
}
int Sum_tree(tree root,int s){
	if(root!=NULL) return root->info + Sum_tree(root->left,s) + Sum_tree(root->right,s);
}
int Max_tree(tree root){
	if(root!=NULL && !root->right){
		return root->info;
	}
	return Max_tree(root->right);
} 
int Count_node(tree root){
	if(root!=NULL) return 1 + Count_node(root->left) + Count_node(root->right);
}
int Count_leafnode(tree root){
    if(root!=NULL){
	if(!root->left && !root->right) 
	return 1 + Count_leafnode(root->left) + Count_leafnode(root->right);
	return 0 + Count_leafnode(root->left) + Count_leafnode(root->right);		
	}
}
int Count_1branchnode(tree root){
	if(root!=NULL){
	if((root->left && !root->right) || (!root->left && root->right))
	return 1 + Count_1branchnode(root->left) + Count_1branchnode(root->right);		
	return 0 + Count_1branchnode(root->left) + Count_1branchnode(root->right);		
	}
}

int Count_2branchnode(tree root){
	if(root!=NULL){
	if(root->left && root->right)
	return 1 + Count_2branchnode(root->left) + Count_2branchnode(root->right);		
	return 0 + Count_2branchnode(root->left) + Count_2branchnode(root->right);		
	}
}
int prime(int n){
	if(n<2) return 0;
	int k=sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%i==0) return 0;
	return 1;
}
int Count_prime(tree root){
	if(root!=NULL){
	if(prime(root->info)) 
	return 1 + Count_prime(root->left) + Count_prime(root->right);		
	return 0 + Count_prime(root->left) + Count_prime(root->right);		
    }
}
void Find_road(tree root,int k){
	if(root!=NULL){
	if(root->info == k) cout<<root->info<<"\t";
	else{
	cout<<root->info<<"->";
    if(root->info > k) Find_road(root->left, k);
    else Find_road(root->right, k);
	}
	}	
}

int Level_node(tree root, int k) {
	if(root!=NULL && root->info!= k) return 1 + max(Level_node(root->left, k), Level_node(root->right, k));
	return 0;
}
int High_tree(tree root){
	if(root!=NULL)  return High_tree(root->left) > High_tree(root->right) ? High_tree(root->left) + 1 : High_tree(root->right) + 1;
	return 0;
}
int main(){
	int x,s=0;
	tree seed;           //test1: n=7: 4 6 5 2 7 1 3
    Create_BST(seed);    //test2: n=10: 8 3 5 2 20 11 30 9 18 4
	cout<<"\nEnter x: ";cin>>x;   
    cout<<"Result: "<<Find_node(seed,x);
    cout<<"\n\nTotal: "<<Sum_tree(seed,s);
    cout<<"\n\nMax: "<<Max_tree(seed);
    cout<<"\n\nNumber node: "<<Count_node(seed);
    cout<<"\n\nNumber Leaf node: "<<Count_leafnode(seed);
    cout<<"\n\nNumber 1 branch node: "<<Count_1branchnode(seed);
    cout<<"\n\nNumber 2 branch node: "<<Count_2branchnode(seed);
    cout<<"\n\nPrime: "<<Count_prime(seed);
    cout<<"\n\nRoad: ";Find_road(seed,x);
    cout<<"\n\nLevel: "<<Level_node(seed,x);
    cout<<"\n\nTree high: "<<High_tree(seed);
    cout<<endl;
	cout<<"\nNode-Left-Right: ";
	NLR(seed);
	cout<<"\nLeft-Node-Right: ";
	LNR(seed);
	cout<<"\nLeft-Right-Node: ";
	LRN(seed);
	cout<<"\nNode-Right-Left: ";
	NRL(seed);
	cout<<"\nRight-Node-Left: ";
	RNL(seed);
	cout<<"\nRight-Left-Node: ";
	RLN(seed);
}
int Insertnode_BST(tree &root,int k){
	if(root!=NULL){	
	if(root->info==k) return 0;
	if(root->info>k) return Insertnode_BST(root->left,k);
	else return Insertnode_BST(root->right,k);
	}
	else{
	root=new node;
	if(root==NULL) return -1;
	root->info=k;
	root->left=root->right=NULL;
	return 1;
	}
}
void Create_BST(tree &root){
	int x,n;
	cout<<"Enter n: ";cin>>n;
	root=NULL;
	for(int i=1;i<=n;i++){
	cin>>x;
	Insertnode_BST(root,x);
	}
}
void NLR(tree root){
    if(root!=NULL){
	cout<<root->info<<" ";
	NLR(root->left);
	NLR(root->right);
	}
}
void LNR(tree root){
    if(root!=NULL){
	LNR(root->left);
	cout<<root->info<<" ";
	LNR(root->right);
	}
}
void LRN(tree root){
    if(root!=NULL){
	LRN(root->left);
	LRN(root->right);
	cout<<root->info<<" ";
    }
}
void NRL(tree root){
    if(root!=NULL){
	cout<<root->info<<" ";
	NRL(root->right);
	NRL(root->left);
	}
}
void RNL(tree root){
    if(root!=NULL){
	RNL(root->right);
	cout<<root->info<<" ";
	RNL(root->left);
	}
}
void RLN(tree root){
    if(root!=NULL){
	RLN(root->right);
	RLN(root->left);
	cout<<root->info<<" ";
	}
}