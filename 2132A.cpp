#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string a, b, c;

        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;

        deque<char> dq;

        for(char ch : a)
            dq.push_back(ch);

        for(int i = 0; i < m; i++) {
            if(c[i] == 'V')
                dq.push_front(b[i]);
            else
                dq.push_back(b[i]);
        }

        for(char ch : dq)
            cout << ch;

        cout << endl;
    }

    return 0;
}
