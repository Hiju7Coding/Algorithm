#include<iostream>
using namespace std;
 
bool ok(int i,int j){
	return abs(i/3-j/3)<=1&&abs(i%3-j%3)<=1;
}
int main(){
        char s[12];
        cin >> s>> s+3>>s+6;
	string pry="CCC",l;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			for(int k=0; k<9; k++){
				if(i!=j&&j!=k&&k!=i&&ok(i,j)&&ok(j,k)){
					l=s[i]; l+=s[j]; l+=s[k]; pry=min(pry,l);
				}
			}
		}
	}
	cout<<pry<<endl;
}
//1906A