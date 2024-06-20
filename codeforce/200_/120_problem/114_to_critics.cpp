#include <iostream>
using namespace std;
 
int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		puts(a+b>=10||c+b>=10||a+c>=10?"YES":"NO");
	}
	return 0;
}
//1850A