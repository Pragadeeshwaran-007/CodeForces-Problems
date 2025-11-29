#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	unordered_set<char> seen;
	for(int i =1; i < s.length()-1 ; i++){
		if(s[i] >= 'a' && s[i] <='z'){
		    seen.insert(s[i]);
		}
	}
	
	cout << seen.size();

	return 0;
}