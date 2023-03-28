#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,nn,i,j,a;
    map<int,string>mp;
    cin>>t;
    string s;
    while(t--)
    {
        j=0;
        cin>>n;
        int x[n+5],y[n+5];
        for(i=0; i<n; i++)
        {
            cin>>s;
            //getchar();
            cin>>x[i]>>y[i];
            mp[i]=s;


        }
        cin>>nn;
        while(nn--)
        {
            int p;
            j=0;
            cin>>a;
            for(i=0; i<n; i++)
            {
                //cout<<x[i]<<" "<<y[i]<<endl;
                if(a>=x[i]&&a<=y[i])
                {
                    j++;
                    s=mp[i];
                }
            }
            if(j==0||j>1)
                cout<<"UNDETERMINED"<<endl;
            else
                cout<<s<<endl;
        }
        mp.clear();
        if(t!=0)
            cout<<endl;
    }
}
