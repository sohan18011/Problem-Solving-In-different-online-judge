#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i, j,n,s;
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0&&b==0)
            break;
        if(a==1)
            cout<<floor(sqrt(b))<<endl;
            else if (a==0)
                 cout<<floor(sqrt(b))<<endl;
        else
        {
            i=(sqrt(a));
            if(i*i==a)
                i=i-1;
            j=(sqrt(b));
//            if(i==0)
//                i=1;
        if(j*j==b&&i*i==n)
            cout<<j-i+1<<endl;
            //cout<<i<< " "<<j<<endl;
            else
            cout<<j-i<<endl;
        }


    }
}
