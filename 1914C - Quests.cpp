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

        vector<long long> a(n+1), b(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        long long prefA = 0, best = 0, ans = 0;

        for (int i = 1; i <= n && i <= k; i++) {
            prefA += a[i];
            best = max(best, b[i]);

            long long rem = k - i;
            long long total = prefA + rem * best;

            ans = max(ans, total);
        }

        cout << ans << "\n";
    }
    return 0;
}

