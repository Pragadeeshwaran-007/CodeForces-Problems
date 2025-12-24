#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long n) {
    if (n == 0) return false;
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
