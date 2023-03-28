#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,y;
    int i,a,b,j,k=0;
    cin>>s>>y;
    reverse(s.begin(),s.end());
    if(s==y)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
