#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,c,x,y,s,z,p;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;
        x=max(a,b);
        //y=min(a,b);
        //z=/min(b,c);
        p=max(x,c);
     //   cout<<y<<" "<<z<<" "<<p<<endl;;

        s=a*a+b*b+c*c-p*p;
        p=p*p;
       // cout<<s<<" "<<p;
        if(p==s)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
