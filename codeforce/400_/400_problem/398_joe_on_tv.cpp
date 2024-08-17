#include<bits/stdc++.h>
using namespace std;
double n,a,i;
int main(){
    cin>>n;
    for(i=n;i>=1;i--){
        a+=(1/i);
    }
    cout<<a;
}
//1293B