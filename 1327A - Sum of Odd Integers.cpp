#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        bool same_parity = (n % 2) == (k % 2);

        ll min_sum = k * k;

        if(same_parity && n >= min_sum){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
