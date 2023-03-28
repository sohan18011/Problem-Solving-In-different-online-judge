#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,p=1;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<"Case "<<p<<": ";
    a=a*(a-1);
    if(a%4==0)
            cout<<a/4<<endl;
        else
            cout<<a/2<<"/2"<<endl;
            p++;
    }


    return 0;
}
