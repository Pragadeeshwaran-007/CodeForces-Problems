#include<bits/stdc++.h>
using namespace std;

bool chatRoom(string s) {
    string tar = "hello";
    int j =0;
    for (char ch : s) {
        if (ch == tar[j]) {
            j++;
            if (j == tar.length()) {
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    if (chatRoom(s)) {
        cout  << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
