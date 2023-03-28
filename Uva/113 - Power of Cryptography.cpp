#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,k,s;
    while(cin>>p>>k)
    {
        s=pow(k,1/p);
        cout<<setprecision(0)<<fixed<<s<<endl;
    }
}
