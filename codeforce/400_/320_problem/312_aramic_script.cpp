#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<set<char>> s;
    int n;
    string c;
    cin >> n;
    while (n--)
    {
        cin >> c;
        s.emplace(c.begin(), c.end());
    }
    cout << s.size() << endl;
}
//975A