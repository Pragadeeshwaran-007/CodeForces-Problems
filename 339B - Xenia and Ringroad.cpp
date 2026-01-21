#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    long long cur = 1;          
    long long total = 0;        

    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        if (a >= cur) {
            total += (a - cur);
        } else {
            total += (n - cur) + a;
        }
        cur = a;
    }

    cout << total << '\n';
    return 0;
}
