#include<bits/stdc++.h>
using namespace std;
int prime(long long  int n)
{
    vector<long long  int >v;
    while(n%2==0)
    {
        v.push_back(2);
        n=n/2;
    }
    for(long long int i=3; i*i<=n; i=i+2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            //cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
        v.push_back(n);
    for(long long int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<" x ";
    }
    cout<<endl;

}
int main()
{

    long long int t,p;
    while(1)
    {
        cin>>t;
        if(t==0)
            break;
        cout<<t;
        if(t<0)
        {
            cout<<" = -1 x ";
            t=-1*t;
            prime(t);
        }
        else
        {
            cout<<" = ";
            prime(t);
        }

    }
}
