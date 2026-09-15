#include <bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,s,p;
    cin>>k>>n>>s>>p;
    long long sheetsPerPerson=(n+s-1)/s;
    long long total=k*sheetsPerPerson;
    long long packs=(total+p-1)/p;
    cout<<packs<<endl;
}
