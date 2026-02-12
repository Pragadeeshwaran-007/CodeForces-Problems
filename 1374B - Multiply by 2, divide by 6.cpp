#include <bits/stdc++.h>
using namespace std;

int solve(int n) {

    int moves = 0;

    while(n != 1){

        if(n%6 == 0){
            moves++;
            n/=6;
        }
        else if(n%3 == 0){
            moves++;
            n *= 2;
        }
        else{

            return -1;
        }
    }
    return moves;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}
