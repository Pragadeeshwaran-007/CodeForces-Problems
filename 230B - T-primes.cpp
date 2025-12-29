#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    const long long MAXP = 1000000;
    vector<bool> is_prime(MAXP+1, true);
    is_prime[0] = is_prime[1] = false;
    for(long long i = 2; i * i <= MAXP; i++){
        if(is_prime[i]){
            for(long long j = i * i; j <= MAXP; j += i){
                is_prime[j] = false;
            }
        }
    }

    for(int i = 0; i < n; i++){
        long long x = a[i];
        if(x < 4){
            cout << "NO\n";
            continue;
        }
        long long r = (long long)floorl(sqrtl((long double)x));
        if(r * r == x && is_prime[r]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
