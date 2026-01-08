#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        // If a > b
        if (a > b) {
            // Only possible if a is odd and a XOR 1 == b
            if ((a % 2 == 1) && ((a ^ 1) == b)) {
                cout << y << "\n";
            } else {
                cout << -1 << "\n";
            }
            continue;
        }

        // Now a < b
        long long diff = b - a;

        // If add cost is cheaper than xor, just add
        if (x <= y) {
            cout << diff * x << "\n";
        } else {
            // Use as many even xor steps as possible
            long long pairs = ((b + 1LL) / 2LL) - ((a + 1LL) / 2LL);
            long long cost = (diff - pairs) * x + pairs * y;
            cout << cost << "\n";
        }
    }

    return 0;
}
