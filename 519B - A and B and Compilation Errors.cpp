#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n), b(n - 1), c(n - 2);

    long long sumA = 0, sumB = 0, sumC = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sumA += a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
        sumB += b[i];
    }

    for (int i = 0; i < n - 2; i++) {
        cin >> c[i];
        sumC += c[i];
    }

    cout << (sumA - sumB) << "\n";
    cout << (sumB - sumC) << "\n";

    return 0;
}
