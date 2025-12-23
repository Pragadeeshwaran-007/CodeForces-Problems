#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;	
	vector<char> arr;
	for(int i = 0 ; i < s.length(); i++){
		char ch = tolower(s[i]);
		if(ch == 'a' || ch == 'e' ||  ch == 'i' || ch =='o' || ch == 'u' || ch == 'y') continue;
		
		else{
			arr.push_back(ch);
		}
	}
	for(int i = 0 ; i < arr.size(); i++){
		cout << "." << arr[i];
	} 
	return 0;
}
