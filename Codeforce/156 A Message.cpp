#include<bits/stdc++.h>
using namespace std;
long long p[10000];
int main()
{
    string s,ss;
    int i,j,p=0,a=0;
    cin>>s>>ss;
    for(i=0; i<ss.size(); i++)
    {
        a=1;
        for(j=0; j<s.size(); j++)
        {
            if(ss[i]==s[j])
            {
                a=0;
                break;
            }
        }
        if(a!=0)
            p++;

    }
    cout<<p<<endl;
}
