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
        vector<long long> w(n);
        for (int i = 0; i < n; i++) cin >> w[i];

        int L = 0, R = n - 1;
        long long sumL = 0, sumR = 0;
        int ans = 0;

        while (L <= R) {
            if (sumL < sumR) {
                sumL += w[L++];
            } else if (sumR < sumL) {
                sumR += w[R--];
            } else { 
                // equal sums
                ans = max(ans, L + (n - 1 - R));
                sumL += w[L++];
            }
        }

        // final equality check before exit
        if (sumL == sumR)
            ans = max(ans, L + (n - 1 - R));

        cout << ans << "\n";
    }
    return 0;
}

