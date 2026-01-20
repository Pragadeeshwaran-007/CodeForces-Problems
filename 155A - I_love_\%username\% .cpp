#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int first,low,high;
	cin >> first;
	low = first;
	high = first;
	int count = 0;
	for (int i = 1; i < n ;i++) {
		int num;
		cin >> num;
		if (num < low) {
			low = num;
			count++;
		}
		else if ( num > high) {
			high = num;
			count++;
		}
	}
	cout << count;
	return 0;
}

