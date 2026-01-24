#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res(2*n+1, 0);
        vector<bool> used(2*n+1, false);
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                int x;
                cin >> x;
                res[i+j] = x;
                used[x] = true;
            }
        }
        for(int i = 1; i <= 2*n; ++i){
            if(res[i] != 0){
                cout << res[i] << " ";
            } else {
                for(int v = 1; v <= 2*n; ++v){
                    if(!used[v]){
                        used[v] = true;
                        cout << v << " ";
                        break;
                    }
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
