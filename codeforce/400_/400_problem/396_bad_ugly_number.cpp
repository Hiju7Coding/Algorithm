#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<"-1"<<endl;
        else cout<<string(n-1,'9')<<"8"<<endl;
    } 
	return 0;
}
//1326A