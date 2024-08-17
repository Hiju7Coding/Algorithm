#include<bits/stdc++.h>

#define maxn 200005
using namespace std;

multiset<int> w;
long h[maxn],t[maxn];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i = 1; i <=n; i++){
        cin>>h[i];
        w.insert(h[i]);
    }
    for(int i = 1; i <=m; i++){
        cin>>t[i];
        multiset<int>::iterator it = w.lower_bound(t[i]);
        if(*it !=0){
            if(it==w.begin()){
                if(*it == t[i]){
                    cout<<*it<<endl;
                    w.erase(it);
                }
                else cout<<-1<<endl;
            }
            else{
                if(*it==t[i]){
                    cout<<*it<<endl;
                    w.erase(it);
                }
                else{
                    it--;
                    cout<<*it<<endl;
                    w.erase(it);
                }
            }
        }
        else cout<<-1<<endl;
    }
}