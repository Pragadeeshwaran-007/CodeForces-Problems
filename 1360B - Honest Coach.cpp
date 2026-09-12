#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        
        sort(s.begin(), s.end());
        
        int ans = INT_MAX;
        for (int i = 0; i + 1 < n; i++) {
            ans = min(ans, s[i+1] - s[i]);
        }
        
        cout << ans << "\n";
    }
    return 0;
}
