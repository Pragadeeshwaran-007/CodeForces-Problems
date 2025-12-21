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
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        bool ok = true;

        for (int k = n; k >= 1; k--) {
            bool found = false;

            for (int l = 0; l + k <= n; l++) {
                bool all_positive = true;
                for (int i = l; i < l + k; i++) {
                    if (p[i] <= 0) {
                        all_positive = false;
                        break;
                    }
                }

                if (all_positive) {

                  for (int i = l; i < l + k; i++) {
                        p[i]--;
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
