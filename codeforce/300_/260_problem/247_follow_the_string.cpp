#include <iostream>
using namespace std;
int main(){
int t,n,x;
cin>>t;
while(t--){
    cin>>n;
    int arr[200001]={0};
    while(n--){
        cin>>x;
        cout<<char('a'+arr[x]);
        arr[x]++;
    }
   cout<<endl;
}
}
//1927B