#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    int left = 0; 
    int right = n - 1;
    int count = 0;
    while(left <= right){
        if(arr[left] + arr[right] == 4){
            count++;
            left++;
            right--;
        }
        
        else if(arr[left] + arr[right] <= 4){
            count++;
            left++;
            right--;
        }
        else{
            count++;
            right--;
        }
    }
    cout << count;
    return 0;
}