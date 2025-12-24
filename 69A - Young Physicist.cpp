#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 0 ,y = 0, z = 0,num;
	cin >> n;
	for(int i = 0 ; i < n ;i++){
		for(int j = 0; j < 3;j++){
			cin >> num;
			if(j == 0) x += num;
			if(j == 1) y += num;
			else z += num;
		}
	}
	if(x == 0 && y == 0 && z == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
