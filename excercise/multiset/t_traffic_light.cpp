#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x,n,p;
    cin>>x>>n;
 
    set<int> segm{0,x};
    multiset<int> lent{x};
    while(n--){
        cin>>p;
        auto it1 = segm.upper_bound(p);
        auto it2 = it1;
        --it2;

        lent.insert(p - *it2);
        lent.insert(*it1 - p);
        segm.insert(p);
            
        lent.erase(lent.find(*it1 - *it2)); 
        cout << *lent.rbegin() << endl;
    }
    return 0;
}