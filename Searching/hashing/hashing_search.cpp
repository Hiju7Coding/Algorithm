#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, string> hashtable;
	
	hashtable[1] = "One";
	hashtable[2] = "Two";
	hashtable[3] = "Three";
	
	int keytosearch = 2;
	auto it = hashtable.find(keytosearch);
	if(it != hashtable.end()){
		cout<<"key found! value = "<< it -> second;
	}
	else{
		cout<<"key not found!";
	}
	return 0;
}