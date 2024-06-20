#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int n = 5;
    float s = 0, t = 0, m = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            t += j;
            m *= j;
        }
        s += t / m;
        t = 0; // Đặt lại giá trị của t cho vòng lặp tiếp theo
        m = 1; // Đặt lại giá trị của m cho vòng lặp tiếp theo
    }
    cout << "Gia tri cua s voi n = 5 la: " << fixed << setprecision(5) << s << endl;
    return 0;
}