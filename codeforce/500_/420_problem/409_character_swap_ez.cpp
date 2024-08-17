#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        vector<int>v;
        string a, b;
        cin>>n>>a>>b;
        for(int i=0; i<n; i++) if(a[i]!=b[i]) v.push_back(i);
        if(v.size()==2 && a[v[0]]==a[v[1]] && b[v[0]]==b[v[1]]) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
//1243B1