#include<bits/stdc++.h>
using namespace std;
vector<int> parent,mx,mn,sz,money;

void make_set(int v,int u) {
    parent[v] = v;
    mx[v] = v;
    mn[v] = v;
    sz[v]= 1;
    money[v]= u;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if(sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a]+=sz[b];
        money[a] += money[b];
        mx[a] = max(mx[a], mx[b]);
        mn[a] = min(mn[a], mn[b]);
    }
}
int get_money(int v){
    v = find_set(v);
    return money[v];
}
int find_next(int p) {
    p=find_set(p);
    return mx[p];
}
int find_prev(int p) {
    p=find_set(p);
    return mn[p];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,qr;cin>>n>>m;
    parent.resize(n + 2);sz.resize(n + 2, 1);mx.resize(n + 2);mn.resize(n + 2);money.resize(n+2, 0);
    parent[0] = 0;parent[n+1] = 0;
    mx[0] = 0;mx[n+1] = 0;
    mn[0] = 0;mn[n+1] = 0;
    vector<int> house(n+2);
    vector<int> sl(n+1,false);
    house[0] = 0;house[n+1] = 0;
    for(int i = 1; i <= n; ++i) {cin>>house[i];make_set(i,house[i]);}
    while(m--){
        cin>>qr;
        if(!sl[qr]){
            if(sl[qr-1]) {
                union_sets(qr,qr-1);
            }
            if(sl[qr+1]) {
                union_sets(qr,qr+1);           
            }
            sl[qr]=true;
            cout<<get_money(qr)<<endl;
        }
        else{
            int left = find_prev(qr)-1;
            int right = find_next(qr)+1;
            if(house[left] > house[right]) {
                if(sl[left-1]) {
                    union_sets(left,left-1);
                }
                if(sl[left+1]) {
                    union_sets(left,left+1);
                }
                sl[left] = true;
                cout<<get_money(left)<<endl;
            } 
            else {
                if(sl[right-1]) {
                    union_sets(right,right-1);
                }
                if(sl[right+1]) {
                    union_sets(right,right+1);
                }
                sl[right] = true;
                cout<<get_money(right)<<endl;
            }
        }
    }
    return 0;
}