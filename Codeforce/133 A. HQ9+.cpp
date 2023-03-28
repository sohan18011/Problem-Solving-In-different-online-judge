#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n=0;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            n=0;
            break;
        }
        else
            n++;
    }
    if(n!=0)
        cout<<"NO"<<endl;


}
