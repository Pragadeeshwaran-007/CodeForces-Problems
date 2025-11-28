
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , count = 0;
	cin >> n; 
	
	while(n>=100){
		if(n - 100 >= 0){
			count++;
			n -= 100;
		}
	}
	while(n>=20){
		if(n - 20>= 0){
			count++;
			n -= 20;
		}
	}
	while(n >= 10){
		if(n - 10 >= 0){
			count++;
			n -= 10;
		}
	}
	while(n >=  5){
		if(n - 5 >= 0){
			count++;
			n -= 5;
		}
	}
	while(n >= 1){
		if(n - 1 >= 0){
			count++;
			n -= 1;
		}
	}
	cout << count;
		

	return 0;
}