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
        vector<long long> a(n+1), dp(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        long long ans = 0;

        for (int i = n; i >= 1; i--) {
            long long next = i + a[i];
            if (next > n)
                dp[i] = a[i];
            else
                dp[i] = a[i] + dp[next];

            ans = max(ans, dp[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}

