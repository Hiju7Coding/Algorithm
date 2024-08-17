#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,temp;
    cin>>n>>m;
    multiset<int> a;
    for(int i=0;i<n;i++){
        cin>>temp; 
        a.insert(temp);
    }
    while(m--){
        int x,k,sum=0;
        cin>>x>>k;  
        auto it_low = a.lower_bound(x-k);
        auto it_high = a.upper_bound(x+k);
        vector<multiset<int>::iterator> removed;
        
        for(auto it = a.begin(); it != it_low; it++) {
            sum += *it;
            removed.push_back(it);
        }
        for(auto it = it_high; it != a.end(); it++) {
            sum += *it;
            removed.push_back(it);
        }
        for(auto it : removed) {
            a.erase(it);
        }
        cout<<sum<<endl;
    }
    return 0;
}