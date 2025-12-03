#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int x = 180 - a;
        if (x > 0 && 360 % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
