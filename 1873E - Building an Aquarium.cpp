#include <bits/stdc++.h>
using namespace std;

long long waterNeeded(const vector<int>& a, long long h) {
    long long water = 0;
    for (int x : a) {
        if (h > x) water += (h - x);
        if (water > 1e18) break; 
    }
    return water;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<int> a(n);
        long long mx = 0;
        for (int &i : a) {
            cin >> i;
            mx = max(mx, (long long)i);
        }

        long long low = 1, high = mx + x;  
        long long ans = 1;

        while (low <= high) {
            long long mid = (low + high) / 2;
            if (waterNeeded(a, mid) <= x) {
                ans = mid;
                low = mid + 1;  
            } else {
                high = mid - 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

