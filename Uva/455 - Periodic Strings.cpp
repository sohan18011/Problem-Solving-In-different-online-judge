#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,i,j,flag;
    string s;;
    cin>>t;
    while(t--)
    {
        cin>>s;
        m=s.size();
        for(i=1; i<m+1; i++)
        {
            flag=1;
            for(j=0; j<m; j++)
                if(s[j]!=s[(j+i)%m])
                {
                    flag=0;
                    break;
                }
            if(flag==1)
            {
                cout<<i<<endl;
                break;
            }
        }
        if(t)
            cout<<endl;;
    }
    return 0;
}
