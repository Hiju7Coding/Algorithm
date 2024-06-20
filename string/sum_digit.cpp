#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){
    string a;
    getline(cin,a);
    int sum = 0;
    for(int i = 0; i < a.size();i++){
        if(isdigit(a[i])) sum = sum + a[i] - '0';
    }
    cout<<sum<<endl;
    return 0;
}