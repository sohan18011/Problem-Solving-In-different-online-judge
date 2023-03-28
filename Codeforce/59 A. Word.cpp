#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,u=0,l=0;
    string s;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            l++;
        else if(s[i]>='A'&&s[i]<='Z')
            u++;
    }
    if(u>l)
        for(i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    else
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    cout<<s<<endl;

}
