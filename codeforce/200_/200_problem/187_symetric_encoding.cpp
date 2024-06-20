#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int q; cin >> q;
  while(q--){
    int n; string s; cin >> n >> s; 
	string t = s; 
	sort(t.begin(),t.end());
	t.erase(unique(t.begin(),t.end()),t.end());
    for (char a:s) 
	cout << t.end()[-(find(t.begin(),t.end(),a)-t.begin())-1];
    cout << endl;
  }
}
//1974B