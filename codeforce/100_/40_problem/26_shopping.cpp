#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int q[t];
    for(int num = 0; num < t; num++){
        int a,b,n;
        cin>>n>>a>>b;

        int money = 0;

        int temp = n;
        int on = temp%2;
        int in = 0;

        if(on == 1){
            in = (temp-1);
            // 1 2k
            if(2*a <= b) money = temp*a;
            else money = (in*b)/2+a*on;
        }
        else{
            in = temp;
            if(2*a <= b) money = temp*a;
            else money = (temp*b)/2;
        }
        q[num] = money;
    }
    for(int num = 0; num < t; num++){
        cout<<q[num]<<endl;
    }
}