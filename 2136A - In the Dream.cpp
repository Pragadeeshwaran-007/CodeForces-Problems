#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y) {
    int mx = max(x, y);
    int mn = min(x, y);
    return mx <= 2 * mn + 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool firstHalf = valid(a, b);
        bool secondHalf = valid(c - a, d - b);

        cout << (firstHalf && secondHalf ? "YES\n" : "NO\n");
    }
    return 0;
}
