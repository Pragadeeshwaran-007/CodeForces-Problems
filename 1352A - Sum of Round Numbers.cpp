#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){

		int n ;
		cin >> n;
		vector<int>res;
		int div = 10;
		while(n != 0){
			if(n%div != 0){
				res.push_back(n%div);
				n -= n%div;
			}

			div *= 10;
		}
		cout << res.size() << endl;
		for(int num : res){

			cout << num << " ";
		}
		cout << "\n";

	}


	return 0;
}