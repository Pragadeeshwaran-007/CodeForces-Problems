
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    long long curr = 0;
 
    for (int i = 0; i < k; i++) curr += arr[i];
 
    long long best = curr;
    int ans = 1; 
 
    for (int i = k; i < n; i++) {
        curr += arr[i] - arr[i - k];
        if (curr < best) {
            best = curr;
            ans = i - k + 2; 
        }
    }
 
    cout << ans;
}