#include <iostream>
#include <vector>

using namespace std;

// Hàm đệ quy để tìm các phân tích n thành tổng các số nhỏ hơn n
void findPartitions(int n, vector<int> &partition, int start) {
    // Khi n=0, chúng ta đã tìm thấy một phân tích hợp lệ
    if (n == 0) {
        // In ra phân tích này
        for (int i = 0; i < partition.size(); ++i) {
            cout << partition[i];
            if (i != partition.size() - 1)
                cout << " + ";
        }
        cout << endl;
        return;
    }

    // Lặp qua các số từ 1 đến n và thử thêm vào phân tích
    for (int i = start; i <= n; ++i) {
        // Thêm số i vào phân tích
        partition.push_back(i);
        // Tiếp tục tìm kiếm phân tích với n - i
        findPartitions(n - i, partition, i);
        // Loại bỏ số cuối cùng vừa thêm để thử số khác
        partition.pop_back();
    }
}

// Hàm chính
void generatePartitions(int n) {
    // Tạo một vector để lưu phân tích
    vector<int> partition;
    // Gọi hàm đệ quy để tìm các phân tích
    findPartitions(n, partition, 1);
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Cac phan tich cua " << n << " thanh tong cac so nho hon " << n << " la:" << endl;
    generatePartitions(n);
    return 0;
}
