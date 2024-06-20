#include <iostream>
#define maxv 1000

using namespace std;

typedef struct node *LIST;
struct node
{
	
    int v;
    LIST next;
    
};

typedef LIST GRAPH[maxv];

GRAPH G;


void Initialize(GRAPH &G)
{
	
    int i,x,y,m,n;
    LIST t;
    
    //Nhap so canh va so dinh
    cout<<"given number of edges (m) and vertices (n) of graph:";
    cin>>m>>n;
    
    //Khoi tao mang tinh
    for(i=1;i<=n;i++) G[i]=NULL;
    
    //Nhap canh
    for(i=1;i<=m;i++)
    {
    	
        cout<<"given edge "<<i<<"(x, y):"; cin>>x>>y;
        t=new(node); t->v=x; t->next=G[y]; G[y]=t;   // t->next=G[y] : dua dinh 1 vao ds 2
        t=new(node); t->v=y; t->next=G[x]; G[x]=t;
    
	}
	
}
int main()
{
	
	Initialize(G);
	
}