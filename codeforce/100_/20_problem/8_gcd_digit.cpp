#include<bits/stdc++.h>

using namespace std;
long long int gcd(long long int a,long long int b){
    if(b == 0 ) return a;
    else return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    long long int a[t];
    for(int i = 0; i < t; i++){
        cin>>a[i];
    }
    for(int i = 0; i < t; i++){
        long long int temp = a[i];
        long long int p = a[i];
        int sum = 0;
        while(1){
            sum = 0;
            while(temp > 0){
                sum = sum + temp%10;
                temp = temp/10;
            }
            temp = p;
            if(gcd(temp,sum) > 1) break;
            else{
                temp = p + 1;
                p = p + 1;
            }
        }
        cout<<p<<endl;
    }
}