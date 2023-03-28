#include<bits/stdc++.h>
using namespace std;
int main()
{

    string ss,s;
    cin>>s;
    int n=s.size();
    int j=1;
    ss[0]=s[0];
    for(int i=1; i<n; i++)
    {
        if(s[i]=='/'&&s[i-1]=='/')
        {
            continue;
          //  cout<<s[i]<<' '<<i<<endl;
        }
        else
        {
            char c=s[i];
            ss[j]=c;
            cout<<ss[j]<<' '<<s[i]<<' '<<i<<' ' <<j<<endl;
            j++;
        }
    }
    cout<<ss<<endl;
}




