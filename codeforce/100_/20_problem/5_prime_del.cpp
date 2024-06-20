#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int k = 0; k < t;k++){
        string s;
		cin >> s;
		if(s.find("1") < s.find("3"))
			a[k] = 13;
		else
		    a[k] = 31;
    }
    for(int k = 0; k < t;k++){
        cout<<a[k]<<endl;
    }
}