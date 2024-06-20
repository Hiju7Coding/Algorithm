#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n; 
ll result; 
ll a[2 * 100000 + 1]; 
ll mp[23];

int main(){ 
    cin >> n; 
    for (int i = 1; i <= n; ++i){ 
        cin >> a[i]; if (i >= 7){ 
            ++mp[a[i - 6] % 23]; 
            result += mp[a[i] % 23]; 
            
        } 
        
    } 
    cout << result; 
    
}