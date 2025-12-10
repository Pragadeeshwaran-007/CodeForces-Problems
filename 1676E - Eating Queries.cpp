#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n);
        for (auto &x : v) cin >> x;

        sort(v.rbegin(), v.rend());
        for (int i = 1; i < n; i++) v[i] += v[i - 1];

        while (q--) {
            long long x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it == v.end()) cout << -1 << "\n";
            else cout << (it - v.begin() + 1) << "\n";
        }
    }
}

