#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int k = n / 2;

            for (int i = 1; i <= k; ++i) {
                cout << 2 * i << " ";
            }

            for (int i = 1; i < k; ++i) {
                cout << 2 * i - 1 << " ";
            }

            cout << 3 * k - 1 << "\n";
        }
    }

    return 0;
}
