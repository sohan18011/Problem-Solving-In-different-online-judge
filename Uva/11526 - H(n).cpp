#include<bits/stdc++.h>
using namespace std;
long long H(int n)
{
    if(n==0)
        return 0;

    long long res = 0;
    int r=floor(sqrt(n));
    //cout<<r<<endl;
    if(r*r==n)
    {
        res=n/r;
        r--;
    }
    for( int i = 1; i <= r; i++ )
    {
        res = (res + n/i);
        res=res+max(0,n/i-r);
    }
    return res;
}
int main()
{
    long long int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<H(a)<<endl;
    }

}
