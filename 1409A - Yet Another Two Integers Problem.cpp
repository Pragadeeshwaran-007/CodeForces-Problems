#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        long long moves = (diff + 9) / 10;
        cout << moves << '\n';
    }
    return 0;
}
