#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count25 = 0, count50 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 25) {
            count25++;
        }
        else if (x == 50) {
            if (count25 == 0) {
                cout << "NO";
                return 0;
            }
            count25--;
            count50++;
        }
        else { // x == 100
            if (count50 > 0 && count25 > 0) {
                count50--;
                count25--;
            } 
            else if (count25 >= 3) {
                count25 -= 3;
            } 
            else {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}

