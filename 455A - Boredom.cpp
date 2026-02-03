#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    const int MAX_VAL = 100000;
    vector<ll> cnt(MAX_VAL + 1, 0);
    int max_val = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        max_val = max(max_val, x);
    }

    vector<ll> dp(max_val + 1, 0);
    dp[0] = 0;
    if (max_val >= 1) {
        dp[1] = cnt[1];
    }

    for (int i = 2; i <= max_val; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * cnt[i]);
    }

    cout << dp[max_val] << '\n';
    return 0;
}
