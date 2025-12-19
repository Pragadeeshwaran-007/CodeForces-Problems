#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;
    long long result = tiles_n * tiles_m;

    cout << result << endl;
    return 0;
}
