#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long arr[3] = {a, b, c};
        sort(arr, arr + 3);
        a = arr[0]; b = arr[1]; c = arr[2];

        if (c > a + b) {
            cout << b << "\n";
        } else {
            cout << c - a << "\n";
        }
    }
    return 0;
}
