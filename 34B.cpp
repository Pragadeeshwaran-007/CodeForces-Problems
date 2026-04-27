#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    
    int total = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] < 0)
            total += a[i];
        else
            break; // sorted, so no point checking further
    }
    
    cout << -total << endl;
    return 0;
}
