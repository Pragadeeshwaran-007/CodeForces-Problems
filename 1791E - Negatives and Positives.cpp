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

        vector<long long> a(n);
        long long abs_sum = 0;
        int neg = 0;
        long long mn = LLONG_MAX;

        for (long long &x : a) {
            cin >> x;
            if (x < 0) neg++;
            abs_sum += llabs(x);
            mn = min(mn, llabs(x));
        }

        if (neg % 2 == 0) {
            cout << abs_sum << "\n";
        } else {
            cout << abs_sum - 2 * mn << "\n";
        }
    }
}

