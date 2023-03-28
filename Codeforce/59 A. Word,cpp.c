#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,u,l;
    string s;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            l++;
        else
            u++;
    }
    if(u>l)
        for(i=0; i<s.size(); i++)
        {
            s[i]=touper(s[i]);
        }
    else
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    cout<<s<<endl;

}
