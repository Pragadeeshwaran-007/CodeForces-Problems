#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long q = k / (n - 1);
        long long r = k % (n - 1);
        long long result = (r == 0) ? q * n - 1 : q * n + r;
        cout << result << endl;
    }
    return 0;
}
