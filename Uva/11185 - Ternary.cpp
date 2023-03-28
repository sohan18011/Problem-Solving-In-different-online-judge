#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,j;
    while(1)
    {
        i=0;
        cin>>n;
        ll a[100005];
        if(n==-1)
            break;
        //if(n<0)
          //  n=n*-1;
        while(n>0)
        {
            a[i]=n%3;
            n=n/3;
            //  cout<<a[i]<<endl;
            i++;
        }
        if(n==0)
            cout<<0;
        for(j=i-1; j>=0; j--)
            cout<<a[j];
        cout<<endl;
    }
}
