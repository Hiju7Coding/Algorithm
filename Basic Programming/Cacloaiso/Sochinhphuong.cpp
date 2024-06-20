#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number: ";
	cin>>n;
	if((n > 0) && ((int)sqrt(n)*(int)sqrt(n) == n)){
		cout<<"\n"<<n<<" la so chinh phuong";
	}
	else cout<<"\n"<<n<<" khong la so chinh phuong";
}