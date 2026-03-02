#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];
    
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while (!q.empty()) {
        int cell = q.front(); q.pop();
        if (cell == t) { cout << "YES\n"; return 0; }
        int nxt = cell + a[cell - 1];
        if (cell <= n - 1 && !visited[nxt]) {
            visited[nxt] = true;
            q.push(nxt);
        }
    }
    
    cout << "NO\n";
    return 0;
}0
