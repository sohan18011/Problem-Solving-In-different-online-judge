#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i=-1,j=1,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>a;
            i=max(i,a);
        }
        cout<<"Case "<<j<<": "<<i<<endl;
        j++;
    }

}
