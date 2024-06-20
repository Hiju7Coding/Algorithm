#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){
    string a;
    getline(cin,a);
    int count[256] = {0};
    for(int i = 0;i<a.size();i++){
        count[a[i]]++;
    }
    for(int i = 0; i < 256;i++){
        if(count[i] > 0 ){
            cout<<(char)i<<" "<<count[i]<<endl;
        }
    }
    return 0;
}