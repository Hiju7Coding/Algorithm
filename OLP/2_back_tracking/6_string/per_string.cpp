#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generatePermutations(string &S, int start, int end) {
    if (start == end) {
        cout << S << endl;
    } else {
        for (int i = start; i <= end; i++) {
            swap(S[start], S[i]);
            generatePermutations(S, start + 1, end);
            swap(S[start], S[i]); // backtrack
        }
    }
}

void generateCombinations(string &S, vector<char> &comb, int start, int k) {
    if (k == 0) {
        for (char c : comb)
            cout << c;
        cout << endl;
        return;
    }
    for (int i = start; i <= S.size() - k; i++) {
        comb.push_back(S[i]);
        generateCombinations(S, comb, i + 1, k - 1);
        comb.pop_back(); // backtrack
    }
}

void generateArrangements(string &S, vector<char> &arr, vector<bool> &used, int k) {
    if (arr.size() == k) {
        for (char c : arr)
            cout << c;
        cout << endl;
        return;
    }
    for (int i = 0; i < S.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            arr.push_back(S[i]);
            generateArrangements(S, arr, used, k);
            arr.pop_back(); // backtrack
            used[i] = false;
        }
    }
}

int main() {
    string S;
    cout << "Enter the string (uppercase letters only): ";
    cin >> S;
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Permutations of the string:" << endl;
    generatePermutations(S, 0, S.size() - 1);
    
    cout << "\nCombinations of length " << k << ":" << endl;
    vector<char> comb;
    generateCombinations(S, comb, 0, k);
    
    cout << "\nArrangements of length " << k << ":" << endl;
    vector<char> arr;
    vector<bool> used(S.size(), false);
    generateArrangements(S, arr, used, k);

    return 0;
}
