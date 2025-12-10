#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int length;
        cin >> length;

        vector<int> data(length);
        for (int idx = 0; idx < length; idx++) {
            cin >> data[idx];
        }

        unordered_map<int, int> firstIndex;
        bool foundPalindrome = false;

        for (int pos = 0; pos < length; pos++) {
            int value = data[pos];

            if (firstIndex.count(value)) {
                int earlierPos = firstIndex[value];
                if (pos - earlierPos >= 2) {1324B - Yet Another Palindrome Problem
                    foundPalindrome = true;
                    break;
                }
            } else {
                firstIndex[value] = pos;
            }
        }

        cout << (foundPalindrome ? "YES\n" : "NO\n");
    }

    return 0;
}

