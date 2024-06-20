#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int num = 0; num < t; num++){
        int team;
        cin>>team;

        int p[team-1];
        int sum = 0;
        for(int i = 0; i < team-1; i++){
            cin>>p[i];
            sum = sum + p[i]; 
        }
        a[num] = 0-sum;
    }
    for(int num = 0; num < t; num++){
        cout<<a[num]<<endl;
    }
}