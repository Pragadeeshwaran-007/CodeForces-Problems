#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans(n);
    unordered_set<int> seen;

    // Process from right to left
    for(int i = n - 1; i >= 0; i--) {
        seen.insert(arr[i]);
        ans[i] = seen.size();
    }

    // Answer queries
    while(m--) {
        int l;
        cin >> l;
        cout << ans[l - 1] << "\n";
    }

    return 0;
}
