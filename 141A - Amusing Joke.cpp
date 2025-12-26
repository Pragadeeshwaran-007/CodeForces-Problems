#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2,s3;
	cin >> s1 >>s2 >> s3;
	string res = s1 + s2;
	if (res.length() != s3.length()) {
		cout << "NO" << endl;
	}
	else {
		sort(res.begin(), res.end());
		sort(s3.begin(), s3.end());
		for (int i = 0; i < res.length(); i++) {
			if (res[i] != s3[i]) {
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
	}
	return 0;
}

