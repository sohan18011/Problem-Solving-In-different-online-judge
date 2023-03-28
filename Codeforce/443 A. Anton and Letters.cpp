#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    set<char> ss;
    string s;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            ss.insert(s[i]);
        }

    }
    cout<<ss.size()<<endl;
}
