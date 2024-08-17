#include<bits/stdc++.h>
using namespace std;
int main() {
    regex r("[mM]+[eE]+[oO]+[wW]+");
    smatch m;
    string s;
    int t, k;
    cin>>t;
    while(t--){
        cin>>k>>s;
        cout<<(regex_match(s, m, r)?"YES":"NO")<<endl;
    }
    return 0;
}
//1800A