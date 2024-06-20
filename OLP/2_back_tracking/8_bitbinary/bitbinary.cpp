#include <iostream>
#include <vector>
using namespace std;

void generateBinary(int n, vector<int>& binary, int index) {
    if (index == n) {
        // In dãy nhị phân đã được tạo
        for (int i = n-1; i > 0; i--) {
            cout << binary[i];
        }
        cout << endl;
        return;
    }

    // Đặt giá trị cho phần tử tại vị trí index là 0 và tiếp tục sinh tiếp
    binary[index] = 0;
    generateBinary(n, binary, index + 1);

    // Đặt giá trị cho phần tử tại vị trí index là 1 và tiếp tục sinh tiếp
    binary[index] = 1;
    generateBinary(n, binary, index + 1);
}

void generateAllBinary(int n) {
    // Khởi tạo một vector để lưu trữ dãy nhị phân
    vector<int> binary(n);
    generateBinary(n, binary, 0);
}

int main() {
    int n;
    cout << "Nhap do dai n: ";
    cin >> n;
    if (n < 1 || n >= 20) {
        cout << "Nhap n trong khoang (1, 20)" << endl;
        return 1;
    }
    generateAllBinary(n);
    return 0;
}
