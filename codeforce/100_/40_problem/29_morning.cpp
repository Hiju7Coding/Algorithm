#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the number of test cases

    vector<string> testCases(t);
    for (int i = 0; i < t; ++i) {
        getline(cin, testCases[i]);
    }

    for (const string &pin : testCases) {
        vector<int> digits(4);
        for (int i = 0; i < 4; ++i) {
            digits[i] = (pin[i] == '0') ? 10 : (pin[i] - '0');
        }

        int totalTime = 0;
        totalTime += abs(digits[0] - 1); // Initial move from '1' to first digit

        for (int i = 1; i < 4; ++i) {
            totalTime += abs(digits[i] - digits[i - 1]);
        }

        cout << totalTime + 4 << endl; // Include the presses for the four digits
    }

    return 0;
}
