#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();

    vector<int> pref(n + 1, 0);

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            pref[i + 1] = pref[i] + 1;
        else
            pref[i + 1] = pref[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l] << "\n";
    }
    return 0;
}
