#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p=0;
    char s[1000];

    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
            p++;
        else
            p--;
    }
    cout<<p<<endl;
}
