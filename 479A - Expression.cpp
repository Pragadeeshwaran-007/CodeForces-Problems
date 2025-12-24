#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr(3);
    for(int i=0;i<3;i++) {
        cin >> arr[i];
    }
    int sum = arr[0];
    sort(arr.begin(), arr.end());
    for (int i = 1; i < 3; i++) {
        if (sum + arr[i]  > sum * arr[i]) {
            sum = sum + arr[i];
        }
        else {
            sum = sum * arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
