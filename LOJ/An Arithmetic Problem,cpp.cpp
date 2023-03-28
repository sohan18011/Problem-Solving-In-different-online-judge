#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,a,aa,aaa,s,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>aa>>aaa>>s;
        a=abs(aa-a);
        aa=aaa-aa;
        cout<<"Case "<<i<<": ";
        if(a==aa)
            cout<<a*s<<endl;
        else
            cout<<"Error"<<endl;
    }
}
