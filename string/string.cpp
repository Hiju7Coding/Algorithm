#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    string a;
    int x;
    cin>>x;
    cin.ignore();
    getline(cin,a);
    cout<<a<<endl;
    string b;
    cin.ignore();
    getline(cin,b);

    string c = a+b;
    cout<<c<<endl;

    if(a==b) cout<<a<<endl;
    
}