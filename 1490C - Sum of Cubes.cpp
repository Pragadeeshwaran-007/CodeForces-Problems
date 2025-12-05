#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool ok = false;

        for (long long a = 1; a * a * a < x; a++) {
            long long rem = x - a*a*a;
            long long b = cbrt(rem);

            if (b > 0 && b*b*b == rem) {
                ok = true;
                break;
            }
            if ((b+1)*(b+1)*(b+1) == rem) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}

