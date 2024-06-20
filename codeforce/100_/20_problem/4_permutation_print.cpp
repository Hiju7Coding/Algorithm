#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    long long a[t];
    for(int k = 0; k < t;k++) cin>>a[k];
    for(int k = 0; k < t;k++){
        long long r = a[k];
        long long l = 1;
        for(int i = 1; i <= a[k]; i++){
            if(i&1){
                cout<<l<<" ";
                l++;
            }
            else{
                cout<<r<<" ";
                r--;
            }
        }
        cout<<endl;
    }
}