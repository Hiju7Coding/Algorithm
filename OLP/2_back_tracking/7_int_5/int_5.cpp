#include <iostream>
#include <vector>

using namespace std;

// Kiểm tra số có chia hết cho 5 không
bool divisibleBy5(long long num) {
    return num % 5 == 0;
}

// Kiểm tra chữ số có trùng nhau không
bool hasDuplicateDigits(long long num) {
    vector<int> freq(10, 0); // Mảng lưu tần suất xuất hiện của các chữ số

    // Đếm tần suất xuất hiện của từng chữ số
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Nếu có chữ số nào xuất hiện hơn 1 lần thì trả về true
    for (int i = 0; i < 10; ++i) {
        if (freq[i] > 1) {
            return true;
        }
    }

    return false;
}

// Thuật toán quay lui
void generateNumbers(long long n, long long currNum, int lastDigit, int& count) {
    // Nếu số hiện tại lớn hơn n thì dừng
    if (currNum >= n) {
        return;
    }

    // Kiểm tra số hiện tại có chia hết cho 5 không và không có chữ số trùng lặp
    if (divisibleBy5(currNum) && !hasDuplicateDigits(currNum)) {
        count++;
    }

    // Quay lui tạo các số tiếp theo
    for (int digit = 0; digit <= 9; ++digit) {
        // Bỏ qua chữ số trùng lặp với chữ số cuối cùng
        if (digit != lastDigit) {
            generateNumbers(n, currNum * 10 + digit, digit, count);
        }
    }
}

int main() {
    long long n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    int count = 0;
    generateNumbers(n, 0, -1, count);

    cout << "So luong so thoa man: " << count << endl;

    return 0;
}
