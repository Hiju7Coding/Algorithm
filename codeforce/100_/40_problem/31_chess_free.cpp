#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a[t];
    for(int num = 0; num < t; num++){
        vector<int> p(3);
        for (int i = 0; i < 3; ++i) {
            cin >> p[i];
        }

        int d = -1;

        for (int p01 = 0; p01 <= min(p[0], p[1]); ++p01) {
            for (int p02 = 0; p02 <= min(p[0], p[2]); ++p02) {
                for (int p12 = 0; p12 <= min(p[1], p[2]); ++p12) {
                    if ((p[0] - p01 - p02) % 2 != 0 || p[0] < p01 + p02) {
                        continue;
                    }
                    if ((p[1] - p01 - p12) % 2 != 0 || p[1] < p01 + p12) {
                        continue;
                    }
                    if ((p[2] - p12 - p02) % 2 != 0 || p[2] < p12 + p02) {
                        continue;
                    }
                    d = max(d, p01 + p02 + p12);
                }
            }
        }
        a[num]=d;
    }
    for(int num = 0; num < t; num++){
        cout<<a[num]<<endl;
    }
    return 0;
}
