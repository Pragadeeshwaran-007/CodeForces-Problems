#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> events(n);
    int untreated = 0, officers = 0;

    for (int i = 0; i < n; ++i) {
        cin >> events[i];
        if (events[i] == -1) {
            if (officers > 0) {
                officers--;
            } else {
                untreated++;
            }
        } else {
            officers += events[i];
        }
    }

    cout << untreated << endl;
    return 0;
}
