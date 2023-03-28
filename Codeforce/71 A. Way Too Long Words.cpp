#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        j=s.size();
        if(j>10)
            cout<<s[0]<<j-2<<s[j-1]<<endl;
        else
            cout<<s<<endl;

    }
}
