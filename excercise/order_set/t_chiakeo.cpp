#include<iostream>
#include<algorithm>
#include<ext/pb_ds/assoc_container.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main() {
    indexed_set s;
    ll n, k; 
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        s.insert(i+1);
    }
    ll pos = 0;
    for(int i = n; i >= 1; i--){
        pos = (pos + k) % i;
        auto it = s.find_by_order(pos); //
        cout<<*it<<" ";
        s.erase(it);
    }
}
//gnu c++
// josephus
/*
 3 6 2 7 5 1 4
 7 6 5 4 3 2 1
*/