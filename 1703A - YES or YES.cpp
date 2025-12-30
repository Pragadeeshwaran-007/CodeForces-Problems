#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		string str; cin >> str;
		bool y = false;
		bool e = false;
		bool s = false;
		if (tolower(str[0]) == 'y'){
			y = true;
		}
		if (tolower(str[1]) == 'e') {
			e =true;
		}
		if (tolower(str[2]) == 's') {
			s = true;
		}
		if(y && e && s) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}

