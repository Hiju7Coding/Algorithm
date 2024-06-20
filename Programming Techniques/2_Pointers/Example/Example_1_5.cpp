#include<iostream>
using namespace std;
int main(){
   int *a,m=4,n=5;
   a=new int[m*n];
   for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
   *(a+n*i+j)=i*j+1;
   cout<<*(a+13);
   delete a;
   return 0;
}
