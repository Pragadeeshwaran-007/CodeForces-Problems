#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

// function to count divisors
int count_divisors(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int S = x - y;

        // Case 1: sum = 0
        if (S == 0) {
            cout << 1 << "\n";

            // alternating pattern
            for (int i = 0; i < x; i++) {
                cout << "1 -1 ";
            }
            cout << "\n";
        }
        else {
            int d = abs(S);
            int ans = count_divisors(d);

            cout << ans % MOD << "\n";

            // print all 1s then all -1s
            for (int i = 0; i < x; i++) cout << "1 ";
            for (int i = 0; i < y; i++) cout << "-1 ";
            cout << "\n";
        }
    }

    return 0;
}
