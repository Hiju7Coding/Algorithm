#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    string valid[t];
    string value[t];
    for(int num = 0; num < t; num++){
        int n;
        cin>>n;
        int a[n];
        for(int p = 0; p < n; p++){
            cin>>a[p];
        }
        sort(a,a+n);

        if (a[0] == a[n - 1]) {
            valid[num]="NO";
        }
        else {
            valid[num]="YES";
            string s(n,'R'); 
            s[1] = 'B';
            value[num]=s;

        }
    }
    for(int num = 0; num < t; num++){
        if(valid[num] == "NO"){
            cout<<valid[num]<<endl;
        }
        else{
            cout<<valid[num]<<endl;
            cout<<value[num]<<endl;
        }
    }
}