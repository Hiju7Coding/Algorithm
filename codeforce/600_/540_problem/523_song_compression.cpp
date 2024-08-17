#include<bits/stdc++.h>
using namespace std;
long long n,m,sum,a,b,cnt,i;
priority_queue<int>q;
int main(){
    cin>>n>>m;
    for(i=0; i<n; i++){
       cin>>a>>b;
       sum+=a;
       q.push(a-b);
    }
    while(m<sum && q.size()!=0){
    sum-=q.top();
    q.pop();
    cnt++;
    }
    if(m<sum) cout<<-1;
	else cout<<cnt;
}
//1015C