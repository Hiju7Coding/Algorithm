#include<bits/stdc++.h>
using namespace std;
int th[128];
void solve(){
	int n; char t;
    cin >> n >> t;
	vector<string> o[4];
	for(int i = 0; i < 2 * n; i++){
		string s; cin >> s;
		o[th[s[1]]].push_back(s);
	}
	for(int i = 0; i < 4; i++) 
		sort(o[i].begin(), o[i].end());
	vector<string> k;
	for(int i = 0;i < 4; i++){
		if(i == th[t] || o[i].size()%2 == 0) continue;
		k.push_back(o[i].back());
		o[i].pop_back();
	}
	if(o[th[t]].size() < k.size()){
		cout << "IMPOSSIBLE\n";
		return;
	}
	for(int i = 0; i < k.size(); i++){
		cout << k[i] << ' ' << o[th[t]].back() << '\n';
		o[th[t]].pop_back();
	}
	for(int i = 0; i < 4; i++)
		for(int j = 0;j < o[i].size(); j += 2)
			cout << o[i][j] << ' ' << o[i][j+1] << '\n';
}
int main(){
	th['C'] = 0;
	th['D'] = 1;
	th['H'] = 2;
	th['S'] = 3;
	int T; cin >> T;
	while(T--) 
		solve();
}

//1932D