#include <bits/stdc++.h>

using namespace std;
int start = 100;
int end_n = 250;

void sang(int l,int r){
    bool nt[r - l + 1];
    memset(nt,true,sizeof(nt));
    for(int i = 2; i <= sqrt(r);i++){
        int m = max(i*i,(int)((l+i-1)/i)*i);
        for(int j = m; j <= r; j +=i){
            nt[j - l] = false;
        }
    }
    for(int i = max(2,l);i <= r;i++){
        if(nt[i-l]) cout<<i<<" ";
    }
}
int main(){
    sang(start,end_n);
    
}