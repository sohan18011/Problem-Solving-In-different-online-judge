#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    string s,ss;
    getline(cin,s);
    getline(cin,ss);
    //cout<<s.size()<<endl;
    j=max(s.size(),ss.size());
    //cout<<ss.size()<<endl;
    for(i=0; i<j; i++)
    {
        cout<<ss[i]<<s[i]<<endl;
    }

}
