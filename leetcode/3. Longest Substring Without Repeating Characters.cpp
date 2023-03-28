#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,k;
    int n=s.size();
    int start=-1;
    vector<int>vt(256,-1);
    //mp[s[0]]=1;
    int ans=0;
    for(i=0; i<n; i++)
    {
        if(vt[s[i]]>start)
            start =vt[s[i]];
       // cout<<vt[s[i]]<<' '<<start<<endl;
        vt[s[i]]=i;
        //cout<<vt[s[i]]<<endl;
        ans=max(ans,i-start);

    }
    cout<<ans<<endl;
}
