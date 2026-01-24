#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;

        long long p = 10;
        for (int k = 1; k <= 18; k++) {
            long long den = p + 1;
            if (den > n) break;
            if (n % den == 0) ans.push_back(n / den);
            if (p > LLONG_MAX / 10) break;
            p *= 10;
        }

        if (ans.empty()) {
            cout << 0 << '\n';
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << '\n';
            for (long long x : ans) cout << x << " ";
            cout << '\n';
        }
    }
    return 0;
}
