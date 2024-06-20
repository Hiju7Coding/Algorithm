#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    char c = 'A'; //1byte
    int m = (int)c;
    char t = (char)(m+32);
    cout<<c<<" "<<t<<endl;
    cout<<islower(c)<<endl;
    cout<<isupper(c)<<endl;
    cout<<tolower(c)<<endl;
    cout<<toupper(c)<<endl;
    cout<<isdigit(c)<<endl;
}