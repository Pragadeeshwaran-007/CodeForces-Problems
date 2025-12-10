#include<bits/stdc++.h>
using namespace std;
bool perfectNumber(int x){

	int sum = 0 ;
	while(x > 0){
		sum += x%10;
		x /=10; 
	}
	if(sum == 10) return true;
	
	return false;

}

int main(){
	int n;
	cin >> n;
	int num = 19;
	int k = 0;
	while(true){
		
		if(perfectNumber(num)){
			k++;	
		}
		if(n == k){
			cout << num << endl;
			break;
		}
		
		num++;
	}
	
	return 0;
}
