#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll resu(ll p,ll a,ll b,ll m){
    double aux=floor((double)p/(double)(m+1));
    ll k=(p*a)-(aux*(a-b));
    return k;
}
int main(){
    ll a,d,aa,m,b,x;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>d>>aa>>m>>b>>x;
        x-=d;
        ll l,r,mid;
        l=1;r=1e9;
        while(r>=l){
            mid=(l+r)/2;
            if(resu(mid,aa,b,m)>=x && x>resu(mid-1,aa,b,m)){
                cout<<mid<<endl;
                break;
            }
            if(x>resu(mid,aa,b,m)){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
    }
    return 0;
}
