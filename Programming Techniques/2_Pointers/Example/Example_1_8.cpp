#include<iostream>
using namespace std;
int main(){
   int *a,N=24;
   a=new int[N];
   for(int i=0;i<N;i++)
   *(a+i)=2*i+1;
   int n=6,i=2,j=3;
   cout<<*(a+n*i+j);
   delete a;
   return 0;
}
