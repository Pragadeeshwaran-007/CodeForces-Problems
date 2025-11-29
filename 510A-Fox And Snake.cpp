// Fox And Snake
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> arr(n, string(m, '.'));

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++)
                arr[i][j] = '#';
        }
        else if (i % 4 == 1) {
            arr[i][m-1] = '#';
        } 
        else {
            arr[i][0] = '#';
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
}