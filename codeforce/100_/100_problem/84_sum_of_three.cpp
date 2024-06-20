#include<bits/stdc++.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n;
scanf("%d",&n);
if(n<=6||n==9){
printf("NO\n");
}
else {
printf("YES\n%d %d %d\n",1,2+2*(n%3==0),n-3-2*(n%3==0));
}
}
}
//1886A