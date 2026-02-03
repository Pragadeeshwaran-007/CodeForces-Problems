#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool found = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) {
                found = true;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
