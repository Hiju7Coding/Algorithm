#include<bits/stdc++.h>
//22bce382
int T;
int n;
int main(){
scanf("%d",&T);
while(T--){
scanf("%d",&n);
if(n%2==0){
puts("-1");
continue;
}
n>>=1;
printf("%d\n",30);
for(int i=29;i>=0;i--)
printf("%d ",(n>>i)&1?2:1);
puts("");
}
}
//1810B