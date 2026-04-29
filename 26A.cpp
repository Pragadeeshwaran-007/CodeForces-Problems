#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++){
        set<int>primes;
        int x=i;
        for(int p=2;p*p<=x;p++){
            while(x%p==0){
                primes.insert(p);
                x/=p;
            }
        }
        if(x>1)primes.insert(x);
        if(primes.size()==2)count++;
    }
    cout<<count;
}
