#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long g = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            g = (i == 0 ? x : std::gcd(g, x));
        }

        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }


        long long ans = -1;
        for (long long x = 2; x <= 100; x++) {
            if (std::gcd(x, g) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

