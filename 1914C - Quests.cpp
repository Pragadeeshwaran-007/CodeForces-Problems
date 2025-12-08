#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long prefixA = 0;
        long long maxB = 0;
        long long ans = 0;

        for (int i = 0; i < n && i < k; i++) {
            prefixA += a[i];
            maxB = max(maxB, b[i]);

            long long remaining = k - (i + 1);  // after completing 1..i
            long long total = prefixA + maxB * remaining;

            ans = max(ans, total);
        }

        cout << ans << "\n";
    }
    return 0;
}

