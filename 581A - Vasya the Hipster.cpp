#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int different_days = min(a, b);
    int same_days = abs(a - b) / 2;
    
    cout << different_days << " " << same_days << endl;
    
    return 0;
}
