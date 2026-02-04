#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0;
        int right = n - 1;

        while (left < right && s[left] != s[right]) {
            left++;
            right--;
        }

        cout << (right - left + 1) << '\n';
    }

    return 0;
}
