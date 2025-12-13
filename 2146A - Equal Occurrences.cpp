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

        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        vector<int> f;
        for (auto &p : freq) {
            f.push_back(p.second);
        }

        sort(f.begin(), f.end());

        int ans = 0;
        int m = f.size();

        for (int i = 0; i < m; i++) {
            int k = f[i];
            int cnt = m - i;   
            ans = max(ans, k * cnt);
        }

        cout << ans << '\n';
    }
    return 0;
}

