#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    long long x[t];
    string valid[t];
    for(int i = 0;i < t; i++){
        cin>>x[i];
        long long temp = x[i] - x[i]%10 + (x[i]%10+1)%10;
        while(temp > 9){
            if (temp % 10 == 0) {
                valid[i] = "NO";
                break;
            }
            temp /= 10;
        }
        valid[i] = (temp==1? "YES":"NO");
    }
    
    for(int i = 0; i < t; i++){
        cout<<valid[i]<<endl;
    }
}