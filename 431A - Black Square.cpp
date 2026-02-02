#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    
    string s;
    cin >> s;
    
    int calories[4] = {a1, a2, a3, a4};
    long long total = 0;
    
    for (char c : s) {
        int index = c - '1';  // Convert '1'->0, '2'->1, '3'->2, '4'->3
        total += calories[index];
    }
    
    cout << total << endl;
    return 0;
}
