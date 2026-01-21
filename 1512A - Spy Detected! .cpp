#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int maj;
        // n >= 3, so a[2] is always valid
        if (a[0] == a[1] || a[0] == a[2]) {
            maj = a[0];
        } else {
            maj = a[1];
        }

        for (int i = 0; i < n; ++i) {
            if (a[i] != maj) {
                cout << i + 1 << '\n'; // 1‑based index
                break;
            }
        }
    }
    return 0;
}
