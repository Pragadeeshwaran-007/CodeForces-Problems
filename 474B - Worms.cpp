#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> prefix(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i] = (i == 0) ? a[i] : prefix[i - 1] + a[i];
    }
    int m;
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }
    for (int i = 0; i < m; i++) {
        int q = queries[i];
        int pile = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin() + 1;
        cout << pile << endl;
    }
    return 0;
}
