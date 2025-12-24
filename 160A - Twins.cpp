#include <bits/stdc++.h>
using namespace std;

int canSteal(vector<int>& arr) {
    int n = arr.size();
    int total = 0 , count =0 , profit =0;
    for (int num : arr) {
        total += num;
    }
    sort(arr.begin(), arr.end() , greater<int>());
    for (int i = 0 ; i < n ;i++) {
        profit += arr[i];
        count++;
        if (profit > total - arr[i]) {
            return count;
        }
        total -= arr[i];
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i =0 ; i < n ;i++) {
        cin >> arr[i];
    }
    int res = canSteal(arr);
    cout << res;
}
