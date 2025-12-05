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

        vector<int> a(n);
        int odd = 0, even = 0;

        for (int &x : a) {
            cin >> x;
            if (x % 2) odd++;
            else even++;
        }

        if (odd % 2 == 0 && even % 2 == 0) {
            cout << "YES\n";
            continue;
        }

        bool ok = false;
        sort(a.begin(), a.end());

        for (int i = 0; i + 1 < n; i++) {
            if (abs(a[i] - a[i+1]) == 1) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}

