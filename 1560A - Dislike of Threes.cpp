#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> liked;
    int x = 1;
    while (liked.size() < 1000) {
        if (x % 3 != 0 && x % 10 != 3) {
            liked.push_back(x);
        }
        x++;
    }

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << liked[k - 1] << '\n';
    }
    return 0;
}
