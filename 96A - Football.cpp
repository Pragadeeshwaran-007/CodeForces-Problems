#include<bits/stdc++.h>
using namespace std;

bool isDanger(string s) {
    int count  = 1;
    char prev = s[0];
    for (int i =1 ; i < s.length();i++) {
        if (s[i] == prev) {
            count++;
            if (count == 7) return true;
        }
        else {
            count = 1;
        }

        prev = s[i];
    }

    return false;
}
int main(){
    string s;
    cin >> s;
    if (isDanger(s)) {
        cout  << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
