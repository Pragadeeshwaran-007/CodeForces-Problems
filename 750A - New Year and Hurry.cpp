#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int total = 60*4;
	int rem = total - k;
	if (rem <=0 ) {
		cout << 0;
		return 0;
	}
	int time = 0;
	int solved = 0;
	for (int i = 1; i <=n; i++) {
		time += 5 * i;
		if (rem - time < 0) {
			break;
		}
		solved++;
	}
	cout << solved;
	return 0;
}

