#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> marks(n);
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    vector<int> maxMark(m, 0);

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            maxMark[j] = max(maxMark[j], marks[i][j] - '0');
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 0; j < m; j++) {
            if (marks[i][j] - '0' == maxMark[j]) {
                ok = true;
                break;
            }
        }
        if (ok) count++;
    }

    cout << count;
    return 0;
}
