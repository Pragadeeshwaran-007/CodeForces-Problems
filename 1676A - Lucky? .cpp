#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int sum1 = (n % 10) + ((n / 10) % 10) + ((n / 100) % 10);
        int sum2 = ((n / 1000) % 10) + ((n / 10000) % 10) + ((n / 100000) % 10);

        if(sum1 == sum2){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
