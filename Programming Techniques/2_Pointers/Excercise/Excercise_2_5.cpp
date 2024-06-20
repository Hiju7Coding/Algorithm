#include<iostream>
#include<math.h>
using namespace std;
struct Monomial{
	int coefficient;
	int index_number;
};
void Import(Monomial *&A, int &n);
void Export(Monomial *A, int n);
double Caculate(Monomial *A, int n, double x);
int main(){
	Monomial *A;
	int n,x;
	Import(A,n);
	Export(A,n);
	cout<<Caculate(A,n,x);
}
void Import(Monomial *&A, int &n){
	A=new Monomial[n];
	cout<<"Enter number Monomial: "; cin>>n;
	for(int i=1;i<=n;i++)
	cin>>(A+i)->coefficient>>(A+i)->index_number;
}
void Export(Monomial *A, int n){
	for (int i=1;i<=n;i++)
	cout<<(A+i)->coefficient<<" "<<(A+i)->index_number<<"  "<<endl;
}
double Caculate(Monomial *A, int n, double x){
	cout<<"Enter xo value, xo= ";cin>>x;
	double s=0;
	for (int i=1;i<=n;i++)
	s=s+(A+i)->coefficient*pow(x,(A+i)->index_number);
	return s;
}
