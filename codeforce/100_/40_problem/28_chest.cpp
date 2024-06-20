#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int num = 0; num < t; num++){
        int x,y,k;
        cin>>x>>y>>k;
        if(x<y){
            a[num] = y+max(0,y-x-k);
        }
        else{
            a[num] = x;
        }
    }
    for(int num = 0; num < t; num++){
        cout<<a[num]<<endl;
    }
}