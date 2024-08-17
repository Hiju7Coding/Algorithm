#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re0 return 0;

#define INF 1e9
#define MOD 1000000007

#define db double
#define ll long long
#define ull unsigned long long
#define vec vector<ll>
#define mus multiset<ll>
#define pll pair<ll, ll>
#define mus_p multiset<pll>

#define el '\n'
#define fi first
#define se second

#define pb push_back
#define mp make_pair

#define set_f(a) fixed << setprecision(a)
#define sz(x) (int)x.size()
#define sz_str(s) s.length()

#define all(x) x.begin(), x.end()

#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)

#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];

#define out_n(n) cout << n << el;
#define out_ab(a, b) cout << a << ' ' << b << el;
#define output_i(a, n) for_i(i, 0, n-1) cout << a[i] << ' ';
#define output_d(a, n) for_d(i, 0, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}

using namespace std;
#define maxN1 100005
#define maxN2 200005
// init variables
ll n, w, a[maxN1];
void init(){
    in_ab(w, n);
    ina_n(a, n);
}
// function

// solve
void solve(){
    init();
    ll dp[maxN2][maxN2];
    ms(dp, 0);
    for_i(i, 1, n){
        for_i(j, 0, w){
            dp[i][j] = dp[i-1][j];
            if(j >= a[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-a[i-1]] + a[i-1]);
            }
        }
    }
    cout<<"Khoi luong toi da la: "<<dp[n][w]<<el;
    vec path;
    ll re_w  = w;
    for_d(i, n, 1){
        if(dp[i][re_w] != dp[i-1][re_w])
        {
            path.pb(Kg[i]);
            re_w -= Kg[i];
        }
    }
    cout<<"Nhung vat can chon la: ";
    for_d(i, sz(path)-1, 0){
         cout<<path[i]<<" ";
    }

}
int main() {
    fast
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    solve();
    re0;
}

/*
int w;
    cin >> w;
    int Kg[1001];
    int Price[1001];
    int x;
    int cnt=0;
    while(cin >> x)
    {
        Kg[++cnt]=x;
    }
    memset(dp, 0, sizeof(dp));

    for(int i=1;i<=cnt;i++)
    {
        for(int  j = 0 ; j<=w ;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j >= Kg[i])
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-Kg[i]]+Kg[i]);
            }
        }
    }
    cout<<"Khoi luong toi da la: "<<dp[cnt][w]<<endl;
     // Truy vết lại các vật đã chọn
     vector<int>path;
     int remining_w  = w;
     for(int i =cnt ; i> 0 ;i--)
     {
        if(dp[i][remining_w] != dp[i-1][remining_w])
        {
            path.push_back(Kg[i]);
            remining_w -= Kg[i];
        }
     }
     cout<<"Nhung vat can chon la: ";
     for(int i = path.size() -1;i>=0;i--)
     {
         cout<<path[i]<<" ";
     }
*/
/*
Cho n món hàng có khối lượng lần lượt là: a[1], a[2], a[3], ... a[n] (Kg) và một cái ba lô có thể chứa w (Kg).

Yêu cầu: chọn những món hàng bỏ vào ba lô sao cho tổng khối lượng của các món hàng là lớn nhất và không vượt quá w (Kg).

Input: 
+ dòng 1: một số nguyên là w.
+ dòng 2: gồm n số nguyên: a[1], a[2], a[3], ... a[n]

Output:
+ dòng 1: số nguyên là khối lượng lớn nhất của các vật bỏ vào ba lô
+ dòng 2: xuất các vât có khôi lượng a[i] thỏa mãn điều kiện.

input:
10
5 2 4 3
output:
Khoi luong toi da la: 10
Nhung vat can chon la: 5 2 3 
*/