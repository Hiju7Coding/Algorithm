#include <iostream>
#define MAX 100

using namespace std;

typedef struct GRAPH 
{
    int numv;
    int A[MAX][MAX];
};

GRAPH G;


void Initialize(GRAPH &g) // undirected simple graph
{
    cout<<"Given number of vertices of graph:"; cin>>g.numv;
    cout<<"Enter adjacent matrix of graph:\n";
    
	for(int i=1;i<=g.numv;i++)
    {
    
	    for(int j=i+1;j<=g.numv;j++)
        {
     	
            cout<<"A["<<i<<","<<j<<"]="; cin>>g.A[i][j];
			g.A[j][i]=g.A[i][j];
			
        }

    g.A[i][i]=0; cout<<"\n";
    }
    
    
}
int main()
{
	
	Initialize(G);
	
}