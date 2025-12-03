#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        unordered_map<int, int> freq;
        for (int x : a) freq[x]++;

        int mx = 0;
        for (auto &p : freq) mx = max(mx, p.second);

        int uniq = freq.size();

        int ans = min(mx, uniq);
        if (mx == uniq) ans--;

        cout << ans << "\n";
    }
    return 0;
}
