#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> words;
    string cur = "";

    for (int i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            if (!cur.empty()) {
                words.push_back(cur);
                cur.clear();
            }
            i += 3;  // skip "WUB"
        } else {
            cur += s[i];
            i++;
        }
    }

    if (!cur.empty()) {
        words.push_back(cur);
    }

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }

    return 0;
}
