#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;

    for (int turn = 0; turn < n; turn++) {
        int chosen;
        if (arr[left] > arr[right]) {
            chosen = arr[left];
            left++;
        } else {
            chosen = arr[right];
            right--;
        }

        if (turn % 2 == 0) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
