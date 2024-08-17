#include<fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
vector<int> robots, trash;
bool check(int t) {
    int m=robots.size();
    int n=trash.size();
    int j=0;
    for(int i=0; i<m && j<n; i++) {
        int r = robots[i];
        int left=r-t;
        int right=r+t;
        while(j<n && trash[j]<=right) {
            if(trash[j] >= left) j++;
            else break;
        }
    }
    return j==n;
}
int time() {
    sort(robots.begin(), robots.end());
    sort(trash.begin(), trash.end());
    int low=0;
    int high = max(abs(trash.back() - robots.front()), abs(trash.front()-robots.back()));
    while(low < high) {
        int mid =(low+high)/2;
        if(check(mid)) {
            high = mid;
        } else {
            low = mid+1;
        }
    }
    return low;
}
int main() {
    int m, n;
    cin >> m >> n;
    robots.resize(m);
    trash.resize(n);
    for(int i=0; i<m; i++) cin >> robots[i];
    for(int i=0; i<n; i++) cin >> trash[i];
    cout << time();
    return 0;
}