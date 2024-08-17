#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--)
	{
		int a,b,c;
		cin>>a>>b>>c; 
		cout<<max(0, abs(a-b)+abs(a-c)+abs(b-c)-4)<<endl;
	}
}
//1272A