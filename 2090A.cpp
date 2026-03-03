#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        
        long long cycle = x + y;
        long long full_cycles = a / cycle;
        long long total_dug = full_cycles * cycle;
        
        if(total_dug + x > a) {
            cout << "NO\n";   
        } else {
            cout << "YES\n";  
        }
    }
    
    return 0;
}
