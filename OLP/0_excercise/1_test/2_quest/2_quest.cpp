#include <iostream>
#include <vector>
#include <numeric>  // For std::gcd
#include <cmath>    // For sqrt

using namespace std;

// Function to compute the sum of divisors of a given number
int sumOfDivisors(int n) {
    int total = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            total += i;
            if (i != n / i) {
                total += n / i;
            }
        }
    }
    return total;
}

// Function to compute the required sum S for a given n
long long computeS(int n) {
    long long totalSum = 0;
    for (int a = 1; a < n; ++a) {
        for (int b = a + 1; b <= n; ++b) {
            int gcd_ab = gcd(a, b);
            totalSum += sumOfDivisors(gcd_ab);
        }
    }
    return totalSum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long result = computeS(n);
    cout << "The sum S for n = " << n << " is: " << result << endl;

    return 0;
}