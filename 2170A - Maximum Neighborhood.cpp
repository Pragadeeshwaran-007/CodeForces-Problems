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
        if (n == 1) {
            cout << 1 << "\n";
        } else {
            long long ans = 4LL*n*n - 4LL*n + 1;
            cout << ans << "\n";
        }
    }
    return 0;
}
