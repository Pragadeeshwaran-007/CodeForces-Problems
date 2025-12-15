#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int L0 = 0, L1 = 0, R0 = 0, R1 = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        if (l == 0) L0++;
        else L1++;

        if (r == 0) R0++;
        else R1++;
    }

    cout << min(L0, L1) + min(R0, R1) << endl;
    return 0;
}
