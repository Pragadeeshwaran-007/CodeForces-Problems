#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxGap = a[0]; 

        for (int i = 1; i < n; i++) {
            maxGap = max(maxGap, a[i] - a[i - 1]);
        }

        maxGap = max(maxGap, x - a[n - 1]);

        int answer = max(maxGap, 2 * (x - a[n - 1]));

        cout << answer << "\n";
    }

    return 0;
}

