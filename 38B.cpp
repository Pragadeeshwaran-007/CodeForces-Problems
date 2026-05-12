#include<bits/stdc++.h>
using namespace std;

bool knightAttacks(int r1,int c1,int r2,int c2){
    int dr=abs(r1-r2),dc=abs(c1-c2);
    return (dr==1&&dc==2)||(dr==2&&dc==1);
}

bool rookAttacks(int rr,int rc,int r,int c){
    return rr==r||rc==c;
}

int main(){
    string rs,ks;
    cin>>rs>>ks;
    int rr=rs[0]-'a',rc=rs[1]-'1';
    int kr=ks[0]-'a',kc=ks[1]-'1';
    int ans=0;
    for(int r=0;r<8;r++)for(int c=0;c<8;c++){
        if(r==rr&&c==rc)continue;
        if(r==kr&&c==kc)continue;
        if(rookAttacks(rr,rc,r,c))continue;
        if(knightAttacks(kr,kc,r,c))continue;
        if(knightAttacks(r,c,rr,rc))continue;
        ans++;
    }
    cout<<ans<<"\n";
}
