#include <bits/stdc++.h>

using ll = long long;
using namespace std;
ll C[1001][1001];
int c(int n,int k){
    int res = 1;
    k = min(k,n-k);
    for(int i = 0; i < k; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
void pascal(){
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || i == j){
                C[i][j] = 1;
            }
            else C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}
int main(){
    pascal();
    cout<<C[5][3]<<endl;
}