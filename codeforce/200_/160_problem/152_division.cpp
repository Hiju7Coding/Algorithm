#import<iostream>
using namespace std;
main(int a){
	cin>>a;
	while(cin>>a)a/=100,printf("Division %d\n",1+(a<14)+(a<16)+(a<19));
}
//1669A