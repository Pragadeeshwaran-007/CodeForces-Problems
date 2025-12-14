#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int m;
    cin >> n >> m;

    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i].first >> v[i].second; // ai, bi
    }

    // sort by matches per box (bi) descending
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    long long ans = 0;

    for (auto &x : v) {
        if (n == 0) break;
        long long take = min(n, (long long)x.first);
        ans += take * x.second;
        n -= take;
    }

    cout << ans << "\n";
    return 0;
}

